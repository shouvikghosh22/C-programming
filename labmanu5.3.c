/*Use switch case to make a simple calculator that can add, subtract, multiply or divide two input
numbers. The operator (+ , - , * or /) should also be read from user.
Sample Input/Output:
Enter two numbers: 4.5 2.9
Enter operator: +
4.5 + 2.9 = 7.4*/
#include<stdio.h>
int main()
{
   char a;
   float x,y,answer;

   printf("\nCalculator");
   printf("\nEnter x and y");
   scanf("%f %c %f",&x,&a,&y);
   switch (a)
   {
   case '+':
    answer= x+y;

    break;
    case '-':
    answer= x-y;

    break;
    case '*':
    answer= x*y;

        break;
    case '/':
    answer= x/y;

        break;
    default:
        printf ("\nInvalid operator");
   }
        printf("%.2f",answer);










}
