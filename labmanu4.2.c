/*2*/
/*Write a C program that decides whether a person is eligible to work in a particular company or not. The
company policy is: If the person’s age is between 25 and 45, s/he are eligible to work. Otherwise, your
software should say “You are too young or too old”.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the age of a person ");
    scanf ("%d", &n);
    if (n>=25&&n<=45)
        printf("\nThe person is eligible to work");
    else if (n<25)
     printf ("\nYou are too young");
    else
        printf ("\nYou are too old");






}
