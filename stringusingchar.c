#include<stdio.h>
#include<string.h>
//To get the input from the user using character function
int main(){
    char Str[100];
    char ch;
    int i=0;
    printf("Enter the word :");
    while(ch != '\n'){
        scanf("%c", &ch);
        Str[i] = ch;
        i++;
    }
    Str[i]='\0';
    puts(Str);
    return 0;
}