/*4*/
/*Write a C program to check whether an input number is a multiple of only 5 (e.g. 5, 10, 15, ...), only 11
(e.g. 11, 22, 33, ...), both 5 and 11 (e.g. 55, 110, ....), or neither of them (e.g. 2,3, 4, 6, 7, 8, 9, 12, ....).*/
#include<stdio.h>
int main() {
int n;
printf("Enter a number:");
scanf("%d", &n);
if (n%5==0)
    printf("\nThe number is only multiple of 5");
else if (n%11==0)
    printf("\nThe number is only multiple of 11");
    else if (n%5==0&&n%11==0)
        printf("\nThe number is both multiple of 5 and 11");
    else
        printf("\nThe number is multiple of neither of them");
}



