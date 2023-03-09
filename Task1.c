#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,sum,product,difference,quotient,remainder;

    printf("Insert first nymber: ");
    scanf ("%d", &a);
    printf("\nInsert the second number: ");
    scanf ("%d",&b);
    sum=a+b;
    product=a*b;
    difference=a-b;
    quotient=a/b;
    remainder=a%b;
    printf ("\nSum is= %d", sum);
    printf ("\nProduct is= %d", product);
    printf ("\nDifference is= %d",difference);
    printf ("\nQuotient is= %d", quotient);
    printf ("\nRemainder is=%d", remainder);


}
