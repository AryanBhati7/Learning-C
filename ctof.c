#include<stdio.h>
//Converting Celsius into Fahrenheit
float CtoF(float C);
int main() {
    float C;
    printf("Enter the temp in C : ");
    scanf("%f", &C);
    float F = CtoF(C);
    printf("Given Temp in F is %.2f", F);
    return 0;
}
float CtoF(float C){
    float F=((C*0.18)+32);
    return F;
}