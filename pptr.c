#include<stdio.h>
//Pointer to Pointer
int main(){
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;
    
    printf("%u", &pptr);
    return 0;
}