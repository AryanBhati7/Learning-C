#include<stdio.h>
#include<string.h>

void RemoveSpace(char String[]);
int main(){
    char String[100];
    printf("Enter the string :");
    fgets(String,100,stdin);
    RemoveSpace(String);
    printf("String after removing spaces : %s\n", String);
    return 0;
}

void RemoveSpace(char String[]){
    int i,j;
    for(i=0,j=0; String[i] !=0; i++){
        if(String[i] != ' '){
            String[j++]=String[i];
        }
    }
    String[j]='\0';
}