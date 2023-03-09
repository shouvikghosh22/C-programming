#include<stdio.h>
int main()
{
    int m,n,i;
    printf("Enter the value of m: ");
    scanf("%d",&m);
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    printf("\nAll even numbers between m and n in reverse is: ",m,n);
    for(i=n;i>=m;i--)  {

        if(i%2==0)
            printf("\t%d",i);
    }
}
