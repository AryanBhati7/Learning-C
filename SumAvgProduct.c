#include<stdio.h>
//To get sum, product, average of two numbers given by user using Function and pointers
void doWork (int a, int b, int *sum, int *prod, int *avg);
int main(){
    int a,b;
    int sum,prod,avg;
    printf("Enter the two numbers : ");
    scanf("%d %d", &a, &b);
    doWork(a,b,&sum, &prod, &avg);
    printf("Sum of the numbers is %d \nProduct of numbers is  %d \nAvg of numbers is %d \n", sum, prod, avg);
    return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}