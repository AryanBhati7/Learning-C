#include<stdio.h>
//To print your name using arrays and print function
void PrintName(char arr[]);
int main(){
   // char name[]={'A', 'R' , 'Y' , 'A', 'N', '\0'};
    char firstname[] = "Aryan";
    char lastname[] = "Bhati";
    PrintName(firstname);
    PrintName(lastname);
    return 0;
}
void PrintName(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf(" ");
}