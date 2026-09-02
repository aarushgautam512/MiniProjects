#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time (NULL));
    
    int guess;
    int tries = 0;
    int min = 0;
    int max = 20;
    int answer = (rand() % (max - min + 1)) + min;

    printf(" *** NUMBER GUESSING GAME ***\n ");
    
    do{
        printf("Guess the number between %d - %d: ", min, max);
        scanf("%d", &guess);
        tries++;
            
        if(guess < answer){
            printf("TOO LOW\n");
        }
        else if(guess > answer){
            printf("TOO HIGH\n");
        }
        else{
            printf("YOU ARE CORRECT!!\n");
        }


     }while (guess != answer);

    printf("The answer is %d\n", answer);
    printf("It took you %d tries", tries);


    
    return 0;

}