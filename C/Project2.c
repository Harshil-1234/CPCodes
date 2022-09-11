//Snake,water,gun game.
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//Code for game.
int game(char choice, char comp){

    //For DRAW.
    if(choice==comp){
        return printf("DRAW.");
    }

    //For YOUR WIN.
    if(choice=='s' && comp=='w'){
        return printf("You win.");
    }
    else if(choice=='g' && comp=='s'){
        return printf("You win.");
    }
    else if(choice=='w' && comp=='g'){
        return printf("You win.");
    }

    //For YOUR LOSE.
    if(choice=='s' && comp=='g'){
        return printf("You Lose.");
    }
    if(choice=='g' && comp=='w'){
        return printf("You Lose.");
    }
    if(choice=='w' && comp=='s'){
        return printf("You Lose.");
    }


}

int main(){
    char choice,comp;

    //To make computer chose a random choice.
    srand(time(0));
    int num= rand()%100+1;
    if(num<=33){
        comp='s';
    }
    else if(num>33 && num<=66){
        comp='w';
    }
    else{
        comp='g';
    }

    //Driver Code
    printf("*************  Welcome Player. ************\nTo play the game enter your choice:\n\tPress s for snake.\n\tPress w for water.\n\tPress g for gun.");
    printf("\nEnter your choice:\n");
    scanf("%c",&choice);
    printf("\nYou chose %c\nComputer chose %c\n\n\t",choice,comp);
    game(choice,comp);
    printf("\n\n\t*********** Thanks for Playing ***********");
    return 0;
}