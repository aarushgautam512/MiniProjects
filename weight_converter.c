#include <stdio.h>
int main(){

    int choice = 0;
    float kilograms = 0.0f;
    float pounds = 0.0f;
    
    printf("Weight Converter Calculator\n");
    printf("1: Pounds to Kilograms : \n");
    printf("2: Kilograms to pounds : \n");
    printf("Please select your choice 1 or 2: ");
    scanf("%d", &choice);

    if( choice ==1 ){
        printf("Enter the weight in pounds: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds", kilograms, pounds);

    }
    else if (choice==2 ){
        printf("Enter the weight in kilograms : ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms ", pounds, kilograms);
    }
    else {
        printf("Invalid choice, choose between 1 or 2");
    }
    return 0;
}