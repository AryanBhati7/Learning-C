#include<stdio.h>
//Print Hot or Cold Based on Temp entered by user
float HotorCold(float Temp);
float main(){
    float Temp;
    printf("Enter the temp : ");
    scanf("%f", &Temp);
    HotorCold(Temp);
    return 0;
}

float HotorCold(float Temp){
    if(Temp>20){
        printf("HOT");
    }
    else{
        printf("COLD");
    }
}
