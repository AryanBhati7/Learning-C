#include<stdio.h>

int main(){
    int n;
    printf("Enter the value for n : ");
    scanf("%d", &n);

    printf("Multiplication table of %d \n", n);
    printf("---------------------------------\n");
    for(int i=1; i<=10; i++){
        int mul;
        mul = n*i;
        printf("%d x %d = %d \n", n, i, mul);
    }
}