//*Write a program to find the nth prime number. You should use a helper function called checkPrime(int n), which returns true for prime number and false for non-prime number. The prime number series is: 2, 3, 5, 7, 9.... 2 is the 1st prime number, 3 is the 2nd prime number. Your program should find the nth number in this series.*//
#include <stdio.h>
void checkPrime(int n);
int a=2, b, n, count=0, answer, isPrime;

int main()
{

    printf("Enter n: ");
    scanf("%d", &n);
    printf("%d no prime number is: ", n);


    checkPrime(n);
}
        void checkPrime(int n)
        {
        while(count<n)
        {
        isPrime=1;

        for(b=2; b<=a/2; b++)
        {
        if(a%b==0)
        {
            isPrime=0;
            break;
        }

        }
        if(isPrime)
        {
           answer=a;
           count++;
        }

        a++;

        }
        printf("%d\n", answer);


}
