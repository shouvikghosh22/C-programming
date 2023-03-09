/*Print the sum of the series:12+2
2+...+n2
; read n from user.*/

#include<stdio.h>
#include<math.h>
int main()
{
   int n,sum;
   printf("Enter n: ");
   scanf ("%d", &n);
   sum=n*(n+1)*(2*n+1)/6;
   printf("\nTotal is=%d", sum);







}
