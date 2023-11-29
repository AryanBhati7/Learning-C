#include<stdio.h>
#include<math.h>
//Square Root of a number
float SquareRoot(float n);
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Square root of number is %.2f", SquareRoot(n));
    return 0;
}
float SquareRoot(float n){
    return pow(n,0.5);
}
