#include<stdio.h>
//Check number is odd or even
int main() {
    int num;
    printf("Enter your number :");
    scanf("%d", &num);
    if(num%2==0){
        printf("Number is Even");
    }
    else{
        printf("Number is Odd");
    }
    return 0;
}