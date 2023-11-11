#include<stdio.h>
//area of a circle
int main (){
    float radius;
    float pi = 3.14;
    printf("Enter the radius :");
    scanf("%f", &radius);
    printf("Area of the Circle is %f", pi*radius*radius);
    return 0;
}