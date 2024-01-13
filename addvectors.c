#include<stdio.h>

// to get two vectors and them

struct Vector {
    int x;
    int y;
};

void AddVector(struct Vector V1, struct Vector V2, struct Vector Sum);
int main(){
    struct Vector V1 = {5,8};
    struct Vector V2 = {5,6};
    struct Vector Sum = {0};
    AddVector(V1,V2,Sum);
    }

void AddVector(struct Vector V1, struct Vector V2, struct Vector Sum){
    Sum.x = V1.x + V2.x;
    Sum.y = V1.y + V2.y;
    printf("Sum of Vectors 1 and 2 is : x = %d, y = %d\n", Sum.x, Sum.y);
}
