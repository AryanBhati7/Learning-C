#include<stdio.h>
#include<string.h>
//To copy content of old string to new
int main(){
    char OldStr[]="Hello";
    char NewStr[]="Hii";
    strcpy(NewStr, OldStr);
    puts(NewStr);
    return 0;
}