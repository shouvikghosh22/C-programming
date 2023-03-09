#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a,b,c,average;

    printf("Insert first number: ");
    scanf("%f", &a);

    printf("\nInsert second number: ");
    scanf("%f", &b);

    printf("\nInsert the third number: ");
    scanf("%f", &c);

    average= (a+b+c)/3;

    printf("\nThe average is= %f", average);
}
