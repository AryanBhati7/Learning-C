#include<stdio.h>
//To get the sum of first natural numbers n entered by the user
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum of n natural numbers : %d", sum);
return 0;
}