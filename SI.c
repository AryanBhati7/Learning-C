#include<stdio.h>
//Simple Interest
int main() {
    float rate, amount, time;
    printf("Enter the rate of interest :");
    scanf("%f", &rate);
    printf("Enter the amount :");
    scanf("%f", &amount);
    printf("Enter the time :");
    scanf("%f", &time);

    printf("Your Simple interest is : %f", (rate*amount*time)/100);
    return 0;

}