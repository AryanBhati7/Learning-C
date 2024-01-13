#include<stdio.h>
#include<string.h>
//to get the length of the name entered by the user
int main(){
    char Name[100];
    printf("Enter your name :");
    fgets(Name,100,stdin);
    int length = strlen(Name);
    if (length > 0 && Name[length - 1] == '\n') {
        Name[length - 1] = '\0'; // Replace newline with null terminator
        length--; // Update the length
    }
    printf("Length of your name is %d", length);
    return 0;
}