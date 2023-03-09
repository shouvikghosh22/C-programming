#include<stdio.h>
int main()
{
 int n,i,sum;
  i=4;
  sum=0;
 printf("Enter the value of n: ");
 scanf("%d",&n);
 while(i<=n){
    sum=sum+i;
    i=i+7;
 }
 printf("%d",sum);


}

