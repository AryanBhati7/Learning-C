#include<stdio.h>

int main(){
   int a;
   int b;
   printf("Enter your 1st number :");
   scanf("%d", &a);
   printf("Enter your 2nd number :");
   scanf("%d", &b);  
   int sum = a + b;
   printf("Sum of the 2 numbers is : %d", sum);
   return 0;
}
