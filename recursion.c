#include<stdio.h>
//Print Hello World 5 times using Recursive function
void PrintHW(int n);
int main(){
    PrintHW(100000);
    return 0;
}
void PrintHW(int n){
    if(n==0){
        return;
    }
    printf("Hello World \n");
    PrintHW(n-1);
}