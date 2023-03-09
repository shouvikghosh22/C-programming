//*Write a program to compute the following series using while loop: 23+53+83+...+n3*//
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum,j;
    i=2;
    sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(i<=n)
    {
        j=pow(i,3);
        sum=sum+j;
        i=i+3;
    }
    printf("%d",sum);


}
