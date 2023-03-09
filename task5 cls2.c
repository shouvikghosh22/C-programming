#include<stdio.h>


int main(){
   int n;
   printf("Enter number: ");
   scanf ("%d",&n);


   int last=n%10;
   printf ("Last degit is: %d", last);

   int other= n/10;
   printf ("\nOther digit are: %d", other);






}
