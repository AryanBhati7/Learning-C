#include<stdio.h>
//To get the final price by adding 18% GST
void CalculatePrice(float Value);

int main(){
    float Value;
    printf("Enter the Value of Product : ");
    scanf("%f", &Value);
    CalculatePrice(Value);
    printf("Value of Product : %.2f", Value);
    return 0;
}

void CalculatePrice(float Value){
    printf("The Final price of product is %.2f \n", Value + (0.18*Value));
}