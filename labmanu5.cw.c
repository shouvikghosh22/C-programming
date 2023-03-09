/*Read the co-ordinates of two points (x1,y1) and (x2,y2) from user. Compute the
midpoints of these two points and print it up to 2 decimal points.*/
/*4*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x1,x2,y1,y2;
    float first_midpoint, second_midpoint;
    printf(" The two co-ordinates of two points: ");
    scanf("%d%d%d%d", &x1,&x2,&y1,&y2);
    first_midpoint=(x1+x2)/2;
    second_midpoint=(y1+y2)/2;
    printf("The midpoints are: %.2f\t%.2f",first_midpoint,second_midpoint);

}
