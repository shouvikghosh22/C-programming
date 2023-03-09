//*Write a program to display all the letters of the alphabet (a-z). Use two for loops: the 1st one will print all letters in small letters and the 2nd one will print them in capital letters.*//
#include<stdio.h>
char main()
{
    char c,x;
    printf("\nCapital letters\t", c);
    for(c='A';c<='Z';c++){
        printf("%c\t",c);
    }
    printf("\nSmall letters\t");
    for(x='a';x<='z';x++){
        printf("%c\t",x);
    }



}
