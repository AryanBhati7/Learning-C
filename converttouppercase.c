#include<stdio.h>
#include<string.h>
#include<ctype.h>
//Conver all lower cases in the string into UPPER Case
void UpperCase(char String[]);

int main(){
    char String[]="Hello";
    UpperCase(String);
    return 0;
}

void UpperCase(char String[]){
    for(int i=0; String[i] != '\0'; i++){
        String[i]=toupper(String[i]);
    }
    puts(String);
}