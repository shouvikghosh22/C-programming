//*Read a character from user and check if it’s an alphabet. If it’s not an alphabet print “Not an alphabet”. Otherwise, check if it’s a uppercase or a lowercase letter. If it’s in uppercase then print it in lowercase. If it’s lowercase then print it in upper case.*//
#include<stdio.h>
main()
{
    char x,A,Z,a,z,m,n;
    printf("Enter a character: ");
    scanf("%c", &x);
    m=x-32;
    n=x+32;
    if (x<=A&&x>=Z)
        printf("\n%c=n");
    else
     printf("\n%c=m");
    if ((x>='a' && x<='z') || (x>='A' && x<='Z'))
        printf("\nIt's an alphabet");
    else
        printf("\nIt's not an alphabet");


}
