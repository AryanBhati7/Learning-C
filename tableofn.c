#include<stdio.h>
// to get a table of n entered by user
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    int mul;
    for(int i=1; i<=10; i++){
    mul=n*i;
    printf("%d \n", mul);
    }
}
    

