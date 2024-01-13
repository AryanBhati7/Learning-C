#include<stdio.h>

int SumofN (int num);

int main(){
    int num,result;
    printf("Enter the number : ");
    scanf("%d", &num);
    result = SumofN(num);
    printf("Sum of %d is %d", num, result);
}

int SumofN (int num)
{
    if(num==0){
        return 0;
    }
    int sum = SumofN(num-1);
    return num + sum;
}