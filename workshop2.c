#include <stdio.h>
int a; // declare variable a
int b; // declare variable b
int main (void)
{
printf("input number a \n"); //prompt the user to input a number
scanf("%d",&a); //takes user input and store it into a

while(b == 0) // while loop to make sure second number is bigger than 0 otherwise prompt user again
{
printf("input number b (Superior than 0) \n"); //prompt the user to input a number
scanf("%d",&b); //takes user input and store it into b
}

int som = a + b; // calculate +
int sous = a - b; // calculate -
int mult = a * b; // calculate *
int div = a / b; // calculate /
int mod = a % b; // calculate % 
printf("a+b = %d \n a-b = %d \n a*b = %d \n a/b = %d \n a modulo b = %d\n",som,sous,mult,div,mod); //displays the calculated results.

}
