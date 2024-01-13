#include<stdio.h>
//To print odd numbers to a new file



int main(){
    FILE *fptr;
    fptr = fopen("odd.txt", "w");
    int n;
    printf("Enter the number n : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i % 2 != 0){
        fprintf(fptr, "%d \n", i);
    }}
fclose(fptr);
return 0;
}