#include <stdio.h>

int myNum = 16;
float myFloat = 16.5;
char myChar = 'A';
int main(){
    printf("%d\n", myNum);
    //Use %d or %i for integers 
    printf("%f\n", myFloat);
    //Use %f for float numbers (decimals)
    printf("%c\n", myChar);
    //Use %c for characters
    return 0;
}