#include<stdio.h>
//Ternary Condition for odd even
int main () {
    int num;
    printf("Enter the number");
    scanf("%d", &num);
    num%2==0 ? printf("Number is Even") : printf("Number is Odd");
    return 0;
}