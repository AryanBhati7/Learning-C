#include<stdio.h>
//Swap function
//int Swap(int a, int b);
int _Swap(int *a, int *b);
int main(){
    int a =5, b =3;
    printf("Before swapping: %d and %d\n",a,b);
    //Swap(a,b);
    _Swap(&a, &b);
    printf("After Swapping : %d and %d \n", a, b);
    return 0;
}
//int Swap(int a, int b){
  //  int c= a;
    //a=b;
    //b=c;
    //printf("After Swapping : %d and %d \n",a,b);


int _Swap(int *a, int *b){
    int c=*a;
    *a=*b;
    *b=c;
}