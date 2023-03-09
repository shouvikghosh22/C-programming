/*Find the angle of a segment in a circle; read the arc length and radius from user.*/
/*5*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float l,r,angle;
    printf ("Enter the value of l: ");
    scanf("%f", &l);
    printf("\nEnter the value of r: ");
    scanf("%f", &r);
    angle=l/r;
    printf("\nThe angle of a segment in a circle is:%f", angle);

}
