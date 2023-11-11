#include<stdio.h>
//To check if the number entered is NAtural number or not
int main() {
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    if(num>0 ){
        printf("Natural Number");
    }
    else if(num<=0 ){
        printf("Not a Natural number");
    }
    else {
        printf("Not a Valid number");
    }
    return 0;
}