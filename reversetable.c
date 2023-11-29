#include<stdio.h>
//print reverse table of n
int main() {
    printf("Enter the number :");
    int n;
    scanf("%d", &n);
    for(int i=10;i>=1;i--){
        printf("%d\n",n*i);
    }
    return 0;
}