#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr;
    fptr = fopen("filetest.txt", "w");

    char name[100];
    int age;
    float gcpa;
    printf("Enter Student Name : ");
    scanf("%s", name);

    printf("Enter Student Age : ");
    scanf("%d", &age);

    printf("Enter Student CGPA : ");
    scanf("%f", &gcpa);

    fprintf(fptr, "%s\t", name);
    fprintf(fptr, "%d\t", age);
    fprintf(fptr, "%.2f\t", gcpa);

    fclose(fptr);
    return 0;  
}
