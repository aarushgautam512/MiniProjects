#include <stdio.h>
int main(){
    int choice = 0;
    float celsius = 0.0f;
    float fahrenhiet = 0.0f;

    printf("Temperature Conversion \n");
    printf("1: C to F: \n");
    printf("2: F to C: \n");
    printf("Choose your mode: ");
    scanf("%d", &choice);

    if( choice == 1){
        printf("Enter the temp in C: ");
        scanf("%f", &celsius);
        fahrenhiet = ( celsius * 9/5) + 35;
        printf("%.1f celsius is equal to %.1f fahrenhiet", celsius, fahrenhiet);

    }
    else if (choice == 2 ){
          printf("Enter the temp in C: ");
        scanf("%f", &fahrenhiet);
        celsius = ( fahrenhiet * 5/9) - 35;
        printf("%.1f fahrenhiet is equal to %.1f celsius", fahrenhiet, celsius);

    }
    else{
        printf("INVALID CHOICE, CHOOSE 1 OR 2");
    }
    return 0;

}