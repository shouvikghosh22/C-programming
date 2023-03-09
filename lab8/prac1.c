#include<stdio.h>
main()
{
    int row,col,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(row=1;row<=n;i--)
    {
       for(col=1;col<=n+row;col++){
        printf(" ");
       }

        for(j=10;j<=i;j++)
        {
          printf("* ",j);

        }

        printf("\n");
    }
}
