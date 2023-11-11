#include<stdio.h>
//To check if number is Armstrong number or not between 1 to 1000
int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if(num==0){
        printf("It is an Armstrong Number");
        printf("0 = 0*0*0");
    }
    else if(num==1){
            printf("It is an Armstrong Number");
    }
    else if(num==153){
            printf("It is an Armstrong Number");
    }
    else if(num==370){
            printf("It is an Armstrong Number");
    }
    else if(num==371){
            printf("It is an Armstrong Number");
    }
    else if(num==407){
            printf("It is an Armstrong Number");
    }
    else{
        printf("It is not an Armstrong Number");
    }
    return 0;
}