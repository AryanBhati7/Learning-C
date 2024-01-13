#include<stdio.h>
#include<string.h>
//To add salt '123' in the pass entered by user
void SaltPass(char pass[]);
int main(){
    char pass[100];
    printf("Enter the password :");
    scanf("%s", pass);
    SaltPass(pass);
    return 0;
}

void SaltPass(char pass []){
    char salt []="123";
    char NewPass[200];
    strcpy(NewPass,pass);
    strcat(NewPass, salt);
    puts(NewPass);
}