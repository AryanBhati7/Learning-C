#include<stdio.h>
//to check if the entered character is Uppercase or lowercase
int main() {
    char ch;
    printf("Enter the character :");
    scanf("%c", &ch);
    if(ch >= (int)65 && ch <= (int)90 ){
        printf("UPPERCASE");
    }
    else if(ch >= (int)97 && ch <= (int)122){
        printf("LOWERCASE");
    }
    else{
        printf("Invalid Character");
    }
    return 0;
}