#include<stdio.h>
//To get Factorial of n number
int fac(int n);
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Factorial of %d is %d", n, int facN)
    return 0;
}
int fac(int n){

    if(n==1 !! n==0){
        return 1;
    }
    int facNm1=fac(n-1);
    int facN=facNm1*n;
    return facN;
}