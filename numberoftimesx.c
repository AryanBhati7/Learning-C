#include<stdio.h>
//In an array  of numbers, find how many times does a number 'x' occurs
int Countx(int arr[], int n, int x);
int main(){
    int x;
    int arr[]={1,2,3,1,2,3,5,4,2,3,1,4,6,7,4,6,8,9,4,5,6,8,9,10,4,3,4,8,9,3,1,10};
    printf("Enter the value of x (1 to 10): ");
    scanf("%d", &x);
    printf("Count of %d is %d", x, Countx(arr,32,x));
    return 0;
}
int Countx(int arr[], int n, int x){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            count++;
        }
    }
    return count;
}