#include<stdio.h>
//check if u are adult or not :)
int main() {
    int age;
    printf("Enter your age : \n");
    scanf("%d", &age);
    if(age>18){
        printf("You are an adult\n");
        printf("You can Drive\n");
    }
    else{
        printf("You are not an adult");
    }
}