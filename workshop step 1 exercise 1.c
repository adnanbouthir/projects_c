#include <stdio.h>


int main(void) {
    char name [20]; //stores username 
    char lastName [20]; //stores user_lastname
    char gender[20]; // stores user_gender
    int age; // stores user_age
    long int phone; // stores user_number

    printf("sumbit your name: ");  // prompt the user to enter their name
    scanf("%s", &name);  // takes input from user and store it into variable name

    printf("sumbit your last name: "); // prompt the user to enter their last name
    scanf("%s", &lastName);  // takes input from user and store it into variable lastName

    printf("sumbit your age: "); //prompt the user to enter their age
    scanf("%d", &age);   // takes input from user and store it into variable age

    printf("sumbit your gender: "); //prompt the user to enter their gender
    scanf("%s", &gender);  // takes input from user and store it into variable gender

    printf("sumbit your phone number: "); // prompt the user to enter their phone 
    scanf("%ld", &phone); // takes input from user and store it into variable phone

    printf("your name is %s and last name is %s , you are %d years old , you're a %s, your phone number is %ld", name, lastName, age, gender, phone); 
     // displays the info they entered to the user.
    return 0;

}