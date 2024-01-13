#include<stdio.h>
#include<string.h>
//To get input from the user and return the sliced form of it
void slice(char Str[], int n, int m);
int main(){
    char Str[100];
    printf("Enter the input : ");
    scanf("%s", Str);
    slice(Str,2,6);
    return 0;
}
void slice(char Str[], int n, int m){
    int j=0;
    char NewStr[100];
    for(int i=n; i<=m; i++){
        NewStr[j]=Str[i];
        j++;
    }
    NewStr[j] = '\0';
    puts(NewStr);
}