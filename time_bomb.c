#include<stdio.h>
#include<windows.h>

int main(){

    int i;

    for (i = 10 ; i  >= 0 ; i--){
        
        Sleep(1000);
        printf("%d\n ", i);
    }
    printf("*** BOOM ***"); 
    return 0;
}