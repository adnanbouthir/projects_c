#include <stdio.h>
int a;
int b;
int main (void)
{
printf("Donnez le premier nombre \n");
scanf("%d",&a);

while(b == 0)
{
printf("Donnez le second nombre (Superieur a 0) \n");
scanf("%d",&b);
}

int som = a+ b;
int sous = a-b;
int mult = a*b;
int div = a/b;
int mod = a%b;
printf("a+b = %d \n a-b = %d \n a*b = %d \n a/b = %d \n a modulo b = %d\n",som,sous,mult,div,mod);

}
