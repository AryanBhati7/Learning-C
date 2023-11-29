#include<stdio.h>
//Print namaste for Indian and Bonjour for French
void printNamaste(); //Function declaration to our compiler
void printBonjour();
void printIR();
int main(){ 
    char IorF;
    printf("Enter I for Indian or F for French :");
    scanf("%c", &IorF); 
    if(IorF=='I'){
        printNamaste(); //Function calling
    }
    else if(IorF=='F') {
        printBonjour();
    }-             
    else
        printIR();
    
    return 0;
    }
void printNamaste(){ //Defining our Function
    printf("NAMASTE");
}
void printBonjour(){
    printf("BONJOUR");
}
void printIR(){
    printf("INVALID RESPONSE");
}


