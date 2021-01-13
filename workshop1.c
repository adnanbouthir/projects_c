#include <stdio.h>
//step1 
int age;
int num;
char nom[10];
char prenom[10];
char sexe[10];


int main(void)
{
    printf("Quel est votre nom ?\n");
    scanf("%s",&nom);

    printf("Quel est votre prenom ?\n");
    scanf("%s",&prenom);

    printf("Quel est votre age ?\n");
    scanf("%d",&age);

    printf("Quel est votre sexe ?\n");
    scanf("%s",&sexe);

    printf("Quel est votre numero de telephone ?\n");
    scanf("%d",&num);

    printf("nom : %s\n prenom : %s\n age : %d\n sexe : %s\n numero de telephone : 0%d\n",nom,prenom,age,sexe,num);

}
