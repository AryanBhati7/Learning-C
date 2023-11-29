#include<stdio.h>
//prime number or not
//a prime number is a positive integer greater than 1 that has no positive divisors other than 1 and itself.
int main() {
    int n;
    int mult=1;
    printf("Enter the number : ");
    scanf("%d", &n);
    if(n<1){
        printf("Not a Prime Number");
    }
    else {
    for(int i=2; i*i==n; i++){
        if(n%i==0){
                printf("Not a Prime number");
        }
        }
        printf("It is a Prime Number");
    }
}


