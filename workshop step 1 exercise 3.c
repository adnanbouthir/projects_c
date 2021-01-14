#include <stdio.h>


int main (void)

{
int i=0;
int entier = 0;
int somme =0 ;
float moy;
do
{
printf("Entrez un entier positif :");

scanf("%d",&entier);
if (entier !=-1){
   somme = somme + entier;
i++; 
}

}
while (entier != -1);

moy = somme / (float)i;

printf("La moyenne de ces %d entiers vaut %f\n",i,moy);

}