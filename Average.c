#include<stdio.h>
//Average of 3 numbers
int main() {
    int a,b,c;
    printf("Enter the numbers :");
    scanf("%d %d %d",&a,&b,&c);
    int average = (a+b+c)/3;
    printf("Average of these numbers is : %d", average);
    return 0;
    }