#include<stdio.h>
#include<math.h>
int main()
/*Compute quotient and remainder when you divide x by y (read x, y from user). Also,
compute quotient and remainder when you divide y by x. Print all these four results*/

{
  float x,y,quotient,remainder;
  printf("Enter the value of x: ");
  scanf("%f", &x);
  printf("Enter the value of y: ");
  scanf("%f", &y);
  quotient=x/y;
  printf("\nThe value of quotient is=%f", quotient);
  remainder=x%y;
  printf("\nThe value of remainder is=%f", remainder);








}
