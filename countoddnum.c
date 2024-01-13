#include<stdio.h>
//Count number of odd numbers in an array
int CountOddNum(int arr[], int n);
int main(){
int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int n=15;
printf("Number of odd numbers in arr is %d", CountOddNum(arr,n));
return 0;
}

int CountOddNum(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    return count;
}
