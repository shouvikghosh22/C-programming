/*Print the sum of the series:1+2+...+n; read n from user (Hint: 1+2+...+n= n(n-1)/2)*/
#include<stdio.h>
#include<math.h>
int main()
{
  int n,sum;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  sum=(n*(n-1)/2);
  printf ("\nSum is=%d", sum);



}
