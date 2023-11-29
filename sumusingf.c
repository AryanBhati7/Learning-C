#include<stdio.h>
//To get sum of 2 numbers using sum user defined function
int sum(int a, int b);

int main(){
    int a,b;
    printf("Enter the 1st number : ");
    scanf("%d", &a);
    printf("Enter the 2nd number : ");
    scanf("%d", &b);
    int s=sum(a, b);
    printf("Sum is %d", s);
    }
int sum(int x, int y){
    return x + y;
}