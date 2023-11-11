#include<stdio.h>
//Switch For Mon -1 , Tue-2, Wed-3, Thu-4
int main() {
    int day;
    printf("Enter day :");
    scanf("%d",&day);
    switch (day) {
        case 1 : printf("Monday");  
            break;
        case 2 : printf("Tuesday");
            break;
        case 3 : printf("Wednesday");
            break;
        case 4 : printf("Thursday");
            break;
        case 5 : printf("Friday");
            break;
        case 6 : printf("Saturday");
            break;
        case 7 : printf("Sunday");
            break;
        default : printf("Not a Valid number");
    }
    return 0;
    }