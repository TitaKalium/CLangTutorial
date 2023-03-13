#include <stdio.h>
/* 
Boolean Variables is a data type that has 2 types of values to it:
TRUE or FALSE 
*/

//In Order to import boolean, you need to import the stdbool.h library
#include <stdbool.h>

//A bool variable is declared as follows:
bool IsTrue = true;
bool IsFalse = false;
//A bool variable is basically a masked verssion of 0 or 1 in int, so you have to use the %d and only that format specifier to print it out

int main(){
    printf("%d\n", IsFalse)

}

