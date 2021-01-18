#include <stdio.h>
#include <math.h>


int a;
int b;
int c;
int delta;
int main(void) {
    // prompt the user to enter a and b and c
    printf("please input a , b and c");
    scanf("%d %d %d", &a, &b, &c);
    //calculate delta
    delta = pow(b,2)-4*a*c;
    //now we compare delta with "0"
    
    //if delta > 0
    if (delta >0) {
        printf("equation takes two solutions x1 and x2");
        printf("the value of x1 = %f",(-b-sqrt(delta)/(2*a)));
        printf("the value of x2 = %f",(-b+sqrt(delta)/(2*a)));
    // if delta == 0
    }else if (delta == 0){
        printf(" the equation has one solution");
        printf("\nthe value of x = %.2f",(float)-b/(2*a));
        
        //if delta < 0

    }else{
        printf("the equation has no solution");

    }

}

    
