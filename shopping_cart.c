#include <stdio.h>
int main ()
{
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    float total = 0.0f;

    printf("What would you like to buy?: ");
    fgets(item, sizeof(item), stdin);


    printf("What would be the price?: ");
    scanf("%f", &price);

    printf("How many items will you buy?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("Your total will be : %f", total);

    return 0;

}