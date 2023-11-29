#include<stdio.h>
//Creating a function
void printHello(); //Declaration
void printGoodBye();

int main() { //Calling the function
    printHello();
    printGoodBye();
    return 0;
}
void printHello() { //function definition
    printf("Hello World \n");
}

void printGoodBye(){
    printf("Good Bye:)");
}