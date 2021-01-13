#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main (void)

{

double r;
printf("Veuillez saisir le rayon du cercle :\n ");
scanf("%lf",&r);
double P = 2 * PI*r;
double D = 2*r;
double S = PI*r*r;
printf("le prérimetre %.2lf\n  le diametre %.2lf\n la surface : %.2lf\n",P,D,S);


}
