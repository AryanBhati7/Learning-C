#include<stdio.h>
//Calling a function using address of n
void Square(int n);
void _Square(int *n);
int main(){
    int n =4;
    
    Square(n);
    printf("%d \n", n);

    _Square(&n);
    printf("%d", n);
    return 0;
}

void Square(int n){
    n = n*n;
    printf("%d \n", n);
}

void _Square(int *n){
    (*n) = (*n)*(*n);
    printf("%d \n", *n);
}