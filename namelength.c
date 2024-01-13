#include<stdio.h>
//To get the length of the name entered by the user
int CountName(char name[]);
int main(){
    char Name[100];
    fgets(Name,100,stdin);
    printf("%d", CountName(Name));
    return 0;
}
int CountName(char name[]){
    int count=0;
    for(int i=0; name[i] != '\0' ;i++){
        count ++;
    }
    return count-1;
}