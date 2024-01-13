#include<stdio.h>

void Printnum(int arr[], int n);

int main(){
    int arr[]= {1,2,3,4,5,6,7,8,9,10};
    Printnum(arr, 10);
    return 0;
}

void Printnum(int arr[], int n){
    for(int i=0;i<n;i++){
    printf("%d \t", arr[i]);
    }
}