#include<stdio.h>
// To print complex number 
struct Complex{
    int real;
    int img;
};

int main(){
    struct Complex Number1 = {8, 12};
    struct Complex *ptr = &Number1;
    printf("Real part is %d\n", ptr->real);
    printf("Imaginary part is %d\n", ptr->img);
    return 0;
}