//*Write a program to compute the following series using while loop: 52+92+152+232+....+n2
#include<stdio.h>
#include<math.h>
int main()
{
    int i,sum,j,n;
    i=5;
    j=4;
    sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(i<=n)
    {

        sum=sum+(i*i);
        i=i+j;
        j=j+2;


    }
    printf("%d",sum);

}
