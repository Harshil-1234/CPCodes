//Number Guessing Game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,turns=1;
    srand(time(0)); //To get random number from rand function every time.
    number=rand()%100 + 1; //To get number between 1 and 100 only inclusive.
    //Initialising a loop and run it until the random number is guessed.
    printf("Guess the number between 1 and 100\n");
    
    do{
        scanf("%d",&guess);
        if(guess>number){
            printf("Guess a Lower number.\n");
        }else if(guess<number){
            printf("Guess a Higher number.\n");
        }else{
            printf("Correct! :)\n");
            printf("You took %d turns",turns);
        }
        turns++;
    }while(guess!=number);
    return 0;

}