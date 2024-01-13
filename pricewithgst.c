#include<stdio.h>
//Write a program to enter price of 3 items 
//and print their their final cost with gst
int main(){
    float price[3];
    printf("Enter the price of TV : ");
    scanf("%f", &price[0]);
    printf("Enter the price of Phone: ");
    scanf("%f", &price[1]);
    printf("Enter the price of Laptop : ");
    scanf("%f", &price[2]);

    printf("Final price of these items are as follows \nTV - %f\n", price[0]+(0.18)*price[0]);
    printf("Phone - %f\n",price[1]+(0.18)*price[1]);
    printf("Laptop - %f\n",price[2]+(0.18)*price[2]);
    return 0;
}