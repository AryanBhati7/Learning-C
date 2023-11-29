#include<stdio.h>
/*Keep taking numbers as input until user 
enters a number multiple of 7 */
int main(){
    int n;
    do{
    printf("Enter the number :");
    scanf("%d", &n);
    printf("%d \n",n);
    if(n%7==0){
        printf("MULTIPLE OF 7");
        break;
    }
    }
    while(1);
    return 0;

}