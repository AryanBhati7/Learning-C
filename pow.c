#include<stdio.h>
#include<math.h>

int main(){
    float n,a;
    printf("Enter the number n : ");
    scanf("%f", &n);
    printf("Enter the power : ");
    scanf("%f", &a);
    printf("Your Answer is %.2f", pow(n,a));
}