#include<stdio.h>
//Print Fibbonacci Sequence
int main(){
    int n;
    printf("Enter the n (n>2) :");
    scanf("%d", &n);
    if(n==0){
        printf("Invalid n");
    }
    int Fibb[n];
    Fibb[0]=0;
    Fibb[1]=1;
    for(int i=2; i<n;i++){
        Fibb[i] = Fibb[i-1] + Fibb[i-2];
        printf("%d \t", Fibb[i]);
    }
    return 0;
}