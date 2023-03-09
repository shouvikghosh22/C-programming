//*Write a program that computes the following series using for loop: 10000+2000+400+...+8*//
#include<stdio.h>
int main()
{
    int i,sum,n;
    n=8;
    for(i=1000;i>n;i--);
    {
        i=i/5;
        sum=sum+i;

    }
    printf("%d",sum);
}
