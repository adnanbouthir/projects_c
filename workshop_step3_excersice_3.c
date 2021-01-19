#include<stdio.h>
// program for function

int main() {
// variable declarations
    int n; // number of lines
    int i; // i for first for loop
    int esp; // variable for space
    int star; // variable for stars

    
    printf("please input number of lines: "); //prompt user to input number of lines.
    scanf("%d", &n); // take input from user and store it.

    for (i =1; i<=n; i++) { // first for loop 
        for (esp=1;esp <=n-i;esp++){ // nested for loop to print spaces
            printf(" "); // prints spaces

        }
        for (star=1;star<= 2*i-1; star++){ // nested for loop to print stars
            printf("*"); //prints stars

         }
         printf("\n"); //goes to new line after the of the first loop
    }
    
    return 0;
}