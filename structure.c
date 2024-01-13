#include<stdio.h>

//To using structue to store roll number, name and percentage of a student
int main(){
    struct student {
        char name[50];
        int roll;
    };

    struct student s1;
    printf("Enter the name of student 1 : ");
    scanf("%s", s1.name);
    printf("Enter the roll number of student 1 : ");
    scanf("%d", &s1.roll);
    

    printf("Roll no. %d\t Student Name : %s\n", s1.roll, s1.name);
    
    return 0;
} 