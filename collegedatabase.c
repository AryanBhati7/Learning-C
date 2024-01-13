#include<stdio.h>
#include<string.h>
//To create a database for storing, displaying and sorting of data of a college
typedef struct StudentDetails {
    int roll;
    char Sname;
    float attend;
    float cgpa;
} StuDet;

typedef struct TeacherDetails {
    int teachID;
    char Tname;
    int salary;
    float Exp;
} TDet;

int main(){
    char username[50]; //Username = Aryan
    char pass[50]; //Pass -admin123
    char CorrectUsername[] = "Aryan";
    char CorrectPass[] = "admin123";
    printf("Enter the user name : ");
    fgets(username,50,stdin);
    if(strcmp(username,Aryan)==0){
        printf("INVALID USERNAME");
    }
    printf("Enter the password : ");
    fgets(pass,50,stdin);
    if(strcmp(username,admin)==0)
        printf("INVALID PASSWORD");
    }
}

