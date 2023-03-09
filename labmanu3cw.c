/*Read two integer numbers m, n from user. Compute the value of m*2n as well as the
value of m <<n. Do you see a pattern in the result? Now compute the value of m/2n as
well as the value of m >>n. Do you see a pattern?*/
/*2*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
    int m,n,value1,value2;
    printf("Enter an integer digit m:" );
    scanf ("%d", &m);
    printf("\nEnter an integer digit n: ");
    scanf("%d", &n);
    printf("Left shift by %d: %d", m<<n);
    value1=m*pow(2,n);
    printf("Value1 is:%d",value1);
    printf("\nRight shift by %d: %d", m>>n);
    value2=m/pow(2,n);
    printf("\nValue2is:%d", value2);

}
