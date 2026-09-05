#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    // ROCK PAPER SCISSORS GAME BY USING ONLY 'IF STATEMENTS' 
    
    int userChoice;
    int result;

    printf("*** ROCK PAPER SCISSSORS GAME ***\n");
    printf("1)ROCK\n2)PAPER\n3)SCISSORS\n");
    printf("PLEASE SUBMIT YOUR RESPONSE: ");
    scanf("%d", &userChoice);


    srand(time(NULL));
    
    int min = 1;
    int max = 3;
    int computerChoice = (rand() % (max - min)) + min;

    if( computerChoice == 1 && userChoice == 1){
        printf("ITS A TIE\n");
        printf("Computer's choice was: %d", computerChoice);
    }
     if( computerChoice == 2 && userChoice == 2){
        printf("ITS A TIE\n");
         printf("Computer's choice was: %d", computerChoice);
    }
     if( computerChoice == 3 && userChoice == 3){
        printf("ITS A TIE\n");
         printf("Computer's choice was: %d", computerChoice);
    }

    if( computerChoice == 1 && userChoice == 2){
        printf("YOU WIN\n");
        printf("Computer's choice was: %d", computerChoice);
    }
     if( computerChoice == 2 && userChoice == 3){
        printf("YOU WIN\n");
        printf("Computer's choice was: %d", computerChoice);
    }
    if( computerChoice == 3 && userChoice == 1){
        printf("YOU WIN\n");
        printf("Computer's choice was: %d", computerChoice);
    }

    if( computerChoice == 2 && userChoice == 1){
        printf("YOU LOOSE\n");
        printf("Computer's choice was: %d", computerChoice);

    }
     if( computerChoice == 3 && userChoice == 2){
        printf("YOU LOOSE\n");
        printf("Computer's choice was: %d", computerChoice);
    }
    if( computerChoice == 1 && userChoice == 3){
        printf("YOU LOOSE\n");
        printf("Computer's choice was: %d", computerChoice);
    }
    
    return 0;
}