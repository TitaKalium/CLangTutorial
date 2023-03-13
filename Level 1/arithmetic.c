#include <stdio.h>

int main(){
    const int sum1 = 100 + 50;
    const int sum2 = sum1 + 250;
    const int sum3 = sum2 + sum2;

    printf("%i\n", sum1);
    printf("%i\n", sum2);
    printf("%i\n", sum3);
    return 0;
}

/* You can use different arithmetic operators such as 

+ - Addition - Adds two values together - x + y
- - Subtraction - Subtracts one value from another - x - y
* - Multiplication - Multiplies two values together - x * y
/ - Division - Divides one value by another - x/y
% - Modulus - Returns the division remainder - x % y
++ - Increment - Increases the value of a variable by one - ++x
-- - Decrement - Decreases the value of a variable by 1 - --x */

