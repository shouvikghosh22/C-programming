/*Find the maximum between two numbers using switch case.*/
#include<stdio.h>
int main()
{
   int a,b;
   printf("Enter 1st digit");
   scanf("%d",&a);
   printf("\nEnter 2nd digit");
   scanf("%d",&b);
   switch (a<b)
   {
 case 0:
    printf ("a is the maximum number");
    break;
 case 1:
    printf ("b is the maximum number");
    break;
   }
    return 0;
}





