#include<stdio.h>
//print 0 to number entered by user
int main() {
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
//  for(int i=0; i<=n; i++){
//     printf("%d", i);
//  }
int i=0;
while(i<=n){
    printf("%d", i);
    i++;
}
    return 0;
}