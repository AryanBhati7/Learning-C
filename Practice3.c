#include<stdio.h>
//Perimeter of  a Rectangle
int main() {
    int l;
    int w;
    printf("Enter length :");
    scanf("%d", &l);
    printf("Enter width :");
    scanf("%d", &w);
    printf("Perimeter of Rectangle is : %d", 2*(l+w));
    return 0;
    }