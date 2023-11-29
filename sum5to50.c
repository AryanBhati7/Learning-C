#include<stdio.h>
//TO get the sum of all numbers between 5 to 50 (include 5 and 50)
int main() {
    int sum=0;
    for(int i=5; i<=50; i++){
    sum=sum+i; //sum += i;
    }
    printf("%d \n", sum);
}
