#include<stdio.h>
#include<string.h>

int main(){
    char Str[100];
    printf("Enter the word : ");
    scanf("%s", Str);
    printf("Number of letters in the %s : %d", Str, strlen(Str));
    return 0;
}