#include<stdio.h>
#include<string.h>
//Enter address (house no, block, city, state) of 5 people
struct Address{
        int house;
        int block;
        char city [100];
        char state[100];
    };

void PrintAdd(struct Address add);
int main(){
        struct Address add[5];

        for(int i=0; i<=5; i++);
        printf("Enter the address for Person 1 : ");
        scanf("%d", &add[0].house);
        scanf("%d", &add[0].block);
        scanf("%s", add[0].city);
        scanf("%s", add[0].state);

        PrintAdd(add[0]);
        PrintAdd(add[1]);
        PrintAdd(add[2]);
        PrintAdd(add[3]);
        PrintAdd(add[4]);
        return 0;
}


void PrintAdd(struct Address add){
    printf("Address for Person 1 is : %d, %d, %s, %s\n", add.house, add.block, add.city, add.state);
}


