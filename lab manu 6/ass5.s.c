#include<stdio.h>
int main()
{
    int a=1,x,multiplication,n;
    printf("Enter how many time it will multiply: ");
    scanf("%d",&n);
    printf("Enter the number of multiplication: ");
    scanf("%d",&x);
    while(a<=n)
    {
        multiplication=a*x;
        printf("\n%d",multiplication);

        a++;

    }
}
