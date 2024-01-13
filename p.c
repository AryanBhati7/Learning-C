#include<stdio.h>

int main(){
    for(int i=1; i<=40; i++){
        printf("//*[@id="page-content-wrapper"]/main/div/div/div/app-promotion/div[2]/div[2]/div/table/tbody/tr[%d]/td[3]/select", i);
    }
    return 0;
}