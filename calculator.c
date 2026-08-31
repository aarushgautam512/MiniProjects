#include<stdio.h>
int main(){

    char operator;
    double num1;
    double num2;
    double Result;

    printf("Enter the first number: ");
    scanf(" %lf", &num1 );

    printf("Choose an operator ( + - * /) ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf(" %lf", &num2 );

    switch (operator)
    {
        case '+':
            Result = num1 + num2;
            break;
        case '-':
            Result = num1 - num2;
            break;
        case '*':
            Result = num1 * num2;
            break;
        case '/':
            Result = num1 / num2;
            break;
    }

    printf("Your answer is: %.4lf", Result);

    return 0;
}