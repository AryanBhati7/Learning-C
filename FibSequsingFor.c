#include <stdio.h>
//0,1,1,2,3,5,8,....
int main() {
  int n, t1=0,t2=1,t3;
  printf("Enter the number of term : ");
  scanf("%d", &n);
  
  for(int i=1; i<=n; i++){
    printf("%d, ", t1);
    t3=t1+t2;
    t1=t2;
    t2=t3;
    }
    return 0;
}


  