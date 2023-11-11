#include<stdio.h>
//Fahrenheit to Celsius
int main () {
    float f;
    printf("Enter the temp in F : ");
    scanf("%f", &f);
    float c=(f-32)*(5.0/9.0);
    printf("Temp in C is : %f",c);
    return 0;
}