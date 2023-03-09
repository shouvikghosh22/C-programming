#include<stdio.h>
#include<math.h>
 /*Compute the value of 5x3

-4x2+√(x)+3; read x from user*/
int main() {
float x;
printf( "Enter the value of x: ");
scanf("%f", &x);

float ans;
ans = (5*pow(x,3))- (4*pow(x,2))+(sqrt(x))+3;
printf("ans=%f", ans);

}
