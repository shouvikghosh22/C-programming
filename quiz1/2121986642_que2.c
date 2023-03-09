//*Read the co-ordinates of two points (x1,y1) and (x2,y2) from user. Compute the midpoints and the distance between these two points and print it up to 3 decimal points. Also, print the quadrant (1st/2nd /3rd /4th) of the mid-point.*//
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    float first_midpoint, second_midpoint,distance_between_two_points;
    printf(" The two co-ordinates of two points: ");
    scanf("%d%d%d%d", &x1,&x2,&y1,&y2);
    first_midpoint=(x1+x2)/2;
    second_midpoint=(y1+y2)/2;
    distance_between_two_points=sqrt(pow((y2-y1),2)+pow((x2-x1),2));

    printf("\nThe midpoints are:%.2f,\t%.2f",first_midpoint,second_midpoint);
    printf("\nDistance between two points:%.2f", distance_between_two_points);
}
