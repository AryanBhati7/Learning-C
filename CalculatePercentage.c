#include<stdio.h>
//to calculate percentage in Science,English & Maths
int CalcPercentage(int Science,int English, int Maths);
int main(){
    int Science,English,Maths;
    printf("Enter Marks in Science : ");
    scanf("%d", & Science);
    printf("Enter Marks in English : ");
    scanf("%d", & English);
    printf("Enter Marks in Maths : ");
    scanf("%d", & Maths);
    printf("Your Percentage is %d", CalcPercentage(Science,English,Maths));

}
int CalcPercentage(int Science,int English, int Maths){
    return ((Science + English + Maths) /3);
}

