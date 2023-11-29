#include<stdio.h>
//Print the maximum number between two numbers
int findMax(int *a, int *b);
int main(){
    int a, b;
    printf("Enter the numbers : ");
    scanf("%d %d", &a, &b);
    printf("Max number is %d", findMax(&a,&b));
    return 0;
}
int findMax(int *a, int *b){
    if(*a > *b){
        return *a;
    }
    else {
        return *b;
    }
}