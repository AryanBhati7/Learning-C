#include<stdio.h>
// To get table of number n using function
void printTable(int n);

int main(){
    int n;
    printf("Enter the value of n:" );
    scanf("%d", &n);
    printTable(n); //actual parameter or arrgument
    return 0;
}

void printTable(int n){ //parameter
    for(int i=1;i<=10;i++){
        printf("%d \n", i*n);
    }
}