#include<stdio.h>
//print the array using pointer ++
int main(){
    int enrollment[10];
    for(int i=0; i<5; i++){
    printf("Enter Enrollment number of Student %d : ", i );
    scanf("%d", &enrollment[i]);
    }
    for(int i=0; i<5; i++){
        printf("Enrollment number of %d : %d\n", i,enrollment[i]);
    }
   
}