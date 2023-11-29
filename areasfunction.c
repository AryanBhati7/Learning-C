#include<stdio.h>
//Functions to create areas of square,Rectange and Circle
float SquareAr(float s);
float RectangleAr(float l, float b);
float CircleAr(float r);

int main(){
    char Shape;
    float s,l,b,r;
    printf("Enter the Shape, S-Square, R-Rectangle, C-Circle : ");
    scanf("%c", &Shape);
    if(Shape=='S'){
        printf("Enter the side of Square :");
        scanf("%f", &s);
        printf("Area of the Square is %.2f", SquareAr(s));
    }
    else if(Shape=='C'){
        printf("Enter the radius of Circle :");
        scanf("%f", &r);
        printf("Area of the Circle is %.2f", CircleAr(r));
        }
    else if(Shape=='R'){
        printf("Enter the length and breadth of Rectangle :");
        scanf("%f %f", &l,&b);
        printf("Area of the Squar is %.2f", RectangleAr(l,b));
    }
    else printf("Invalid Response");
    return 0;
}

float SquareAr(float s){
    return s*s;
}

float CircleAr(float r){
    return 3.14*r*r;
}

float RectangleAr(float l, float b){
    return l*b;
}
