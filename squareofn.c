#include<stdio.h>
#include<math.h>
//Using function to get square of number n
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("%.2f", pow(n,2));
    return 0;
}
