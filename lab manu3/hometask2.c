//*Read two integer numbers m, n from user. Compute the value of m*2n as well as the value of m <<n. Do you see a pattern in the result? Now compute the value of m/2n as well as the value of m >>n. Do you see a pattern?*//
#include<stdio.h>
#include<math.h>
main()
{
    int m,n,X,Y;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    X=m*pow(2,n);
    printf("The value of m*2n is=%d", X);
    printf("\nLeft shift by m=%d", m<<n);



}
