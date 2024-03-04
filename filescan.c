#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("text.txt", "a");
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("CHARACTER = %c", ch);
    fclose(fptr);
    return 0;
}