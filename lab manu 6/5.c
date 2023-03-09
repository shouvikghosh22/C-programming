//*Write a C program to print the multiplication table (নামতা) of any given integer number.*//
#include<stdio.h>
int main()
{
    int a=1,n,multiplies,x;
    printf("Enter how many time it will multiply: ");
    scanf("%d",&n);
    printf("Enter the multiplication: ");
    scanf("%d",&x);
    while(a<=n)
    {
        multiplies=a*x;
        printf("%d\n",multiplies);
        a++;
    }
    printf("\t%d\n");
}
