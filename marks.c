#include<stdio.h>
//To check your grade
int main() {
    int marks;
    printf("Enter your marks out of 100 :");
    scanf("%d", &marks);
    if(marks>100 || marks<0){
        printf("Invalid Marks");
    }
    else if(marks>=90 && marks<=100){
        printf("A+");
    }
    else if(marks>=80){
        printf("A");
    }
    else if(marks>=70){
        printf("B");
    }
    else if(marks>=60){
        printf("C");
    }
    else if(marks>=50){
        printf("D");
    }
    else{
        printf("FAILED");
    }
    return 0;
}