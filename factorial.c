#include<stdio.h>
//To get factorial of n
int main() {
    printf("Enter the number :");
    int n;
    int fact=1;
    scanf("%d", &n);
    for (int i=1; i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial of n is %d", fact);
    return 0;
}