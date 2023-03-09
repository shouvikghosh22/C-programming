/*Find the volume of a (a) cube and (b) cylinder
Note: Read necessary inputs from user e.g. height and diameter of the cylinder for (a)*/
#include<stdio.h>
int main()
{

float a,v1,r,h,v2;
float const PI=3.1416;
printf("Enter the volume of cube: ");
scanf("%f", &a);

v1= pow(a,3);
printf("\nThe volume of cube is:%f", v1);

printf("\nEnter the value of the radius of sylinder: ");
scanf("%f", &r);
printf("\nEnter the value of the height of sylinder: ");
scanf("%f", &h);

v2=PI*pow(r,2)*h;
printf("\nThe volume of cylinder is: %f", v2);
}
