/*Read a temperature in Celsius and print its Fahrenheit equivalent (Hint: C=(F-32)*5/9)*/
#include<stdio.h>
int main() {
float c,f;
printf("Enter a temperature in celcius: ");
scanf("%f", &c);
f=(9*c/5)+32;
printf("\nThe temperature in fahrenheit is=%f", f);







}
