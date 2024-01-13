#include<stdio.h>
#include<string.h>
//To count vowels in the input entered by user
int CountVowel(char String[]);

int main(){
    char String[100];
    printf("Enter the string : ");
    scanf("%s", String);
    printf("Number of vowels is %d", CountVowel(String));
    return 0;
}

int CountVowel(char String[]){
    int count=0;
    for(int i=0; String[i] != '\0'; i++){
        if(String[i]=='a' || String[i]=='e' || String[i]=='i' || String[i]=='o' || String[i]=='u'){
            count++;
        }
    }
      return count;
}