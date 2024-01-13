#include<stdio.h>
//to get marks of 3 subjects in one variable using arrays
int main() {
    int marks[3];
    printf("Enter Marks in Physics : ");
    scanf("%d", &marks[0]);
    printf("Enter Marks in Maths : ");
    scanf("%d", &marks[1]);
    printf("Enter Marks in English : ");
    scanf("%d", &marks[2]);

    printf("Your Marks are as follows \nPhysics - %d \nMaths - %d\nEnglish - %d", marks[0], marks[1], marks[2]);

}
