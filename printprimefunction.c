#include<stdio.h>
#include<math.h>
//Wrting a program to take input from the user and print the prime number form 1 to n
int CheckPrimeorNot(int n){ //only for n>=2
        int IsPrime  = 1;        
        if(n==2){
            return IsPrime;
            //return true;
        }
        else { 
            for(int i=2; i<=(n-2); i++){
                if(n%i==0){
                    IsPrime = 0;
                    //break;
                    //return false;
                }
            }
        }
        return IsPrime;
        //return true;
    }
    

int main(){
        printf("Enter the number n : ");
        int n;
        scanf("%d", &n);
        printf("PRIME NUMBERS in the sequence 1 to %d :", n);
        for(int i = 1; i<=n; i++){
            if(CheckPrimeorNot(i)==1){
                printf("%d\n", i);
            }
        }    
        return 0;    
    }

