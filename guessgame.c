#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <math.h>

int main() {
    int n,num,i,temp;
    printf("\nenter the number of players: ");
    scanf("%d", &n);
    int guess[n];
    char my_string[n][30];

    for(i=0; i<n; i++)
    {
        printf("Enter name of player %d: " , i+1);
        scanf("%s", &my_string[i][30]);

        if (my_string[i][30] == ' ') 
        {
            printf("Error reading input for player %d\n", i+1);
            break;
        }
    }

    for (i=1; i<=n; i++)
    {
        printf("\nplayer %d =%s\n", i, my_string[i]);
    }

    Same_play:
    srand(time(NULL));
    num = rand() %10;

    printf("\nguess the number : ");

    for(i=1; i<=n; i++)
    {
        again :
        printf("\n%s guess the number = ", my_string[i]);
        int a;
        scanf("%d", &a);
        if (a<10 && a>=0)
        {
            guess[i] = a;
        }
        else
        {
            printf("\nError reading input for %s \n", my_string[i]);
            goto again;
        }
    }

    int flag = 0;
    for(i=1; i<=n; i++)
    {
        if(guess[i]== num)
        {
            printf("\nplayer %d : %s wins\n", i, my_string[i]);
            flag++;            
        }
    }
    if(flag==0)
    {
        for(i=1 ; i<=n; i++)    
        {
            printf("player %d : %s ", i, my_string[i]);
            printf("loses the game\n");
        }
    }
    printf("\nthe number is %d \n", num);
    printf("\ndo you want to play again?\n press 1 to play again with the same players\n press 2 to play a new game\n press 0 to exit:");
    scanf("%d", &temp);
    if (temp==0)
    {
        exit(0);
    }
    else if(temp==1)
    {
        goto Same_play;
    }
    else if (temp==2)
    {
        main();    
    }
    return 0;
}