//*Write a C program that takes a 5-digit integer number as input from user. If it’s not a 5 digit number print “Not a valid number”. Otherwise print the first and last digit of that number.*//
#include<stdio.h>

#include<stdio.h>
main()
{
    int a, last_digit;
    printf("Enter an integer digit: ");
    scanf("%d",&a);
    last_digit=a%10;
    printf("\nLast digit is:%d", last_digit);






}
