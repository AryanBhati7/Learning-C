#include<stdio.h>
#include<string.h>
// to see if the given character is present in the string or not
void CheckCh(char String[], char ch);
int main(){
    char String[]="helloWorld";
    char ch='h';
    CheckCh(String,ch);
}

void CheckCh(char String[], char ch){
    for(int i=0; String[i] != '\0'; i++){
        if(String[i]==ch){
            printf("Character is present");
            return;
        }
    }
    printf("Character is not present");
}