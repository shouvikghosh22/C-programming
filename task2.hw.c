#include<stdio.h>
#include<math.h>
/*Solve the equation: ax2+bx+c=0 and print the solutions. Read a,b,c from user
Hint: compute the values of (-b+sqrt(b2

-4ac))/2a and (-b-sqrt(b2

-4ac))/2a; here sqrt is a C

function that computes the squared root of a number*/
int main(){
float a,b,c,x1,x2;
printf ("Enter the value of a,b,c: ");
scanf ("%f%f%f", &a, &b, &c);
x1=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
printf("x1 is: %f", x1);
x2=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
printf("x2 is: %f", x2);





}
