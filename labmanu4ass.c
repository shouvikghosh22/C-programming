//*Read a character from user and check if it is a valid hexadecimal digit or not. Hint: a char is a valid hexadecimal digit if it is one of these characters: ‘0’, ‘1’, ... , ‘9’, ‘a’, ’b’, ... , ’f’, ‘A’,’B’, ... ,’F’*//
#include<stdio.h>
main()
{
    char n,A,F,a,f;
    printf("Enter a character: ");
    scanf("%c", &n);
    if(n<=0&&n>=9)
        printf("Valid hexadecimal number");
    else if (n<=A&&n>=F)
        printf("Valid hexadecimal number");
    else if (n<=a&&n>=f)
            printf("Valid hexadecimal number");
    else
    printf("Invalid hexadecimal number: ");


}
