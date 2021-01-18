#include<stdio.h>

/* program to print "fizzbuzz" for every number divided by 3 and 5.
prints "fizz" for every number divided by only 3 and prints "buzz" for every
number divided by only 5. */

int main (void) {
    // variable declaration.
    int a;
    /* we use a for loop to increment numbers from 1 to 100 with conditional statements
    inside to check if number is divided by 3 or 5 or both and print out the results. */
    
    for(a = 1; a <= 100; a++) 
    {
        //if number divided by both 3 and 5 run this block.
        if(a%15 == 0) {
        printf("fizzbuzz\n");
        //if number divided by 3 , run this block.
        }else if (a%3 == 0) {
        printf("fizz\n");
        //if number is divided by 5 , run this block.
        }else if (a%5 == 0) {
        printf("buzz\n");
        //otherwise output the number.
        }else 
        printf("%d\n", a);

       }
    
    return 0;
}




