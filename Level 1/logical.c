/* Logical Operators can test for true or false values between variables or values 
&& 	  Logical and	  Returns true if both statements are true	x < 5 &&  x < 10	
|| 	  Logical or	  Returns true if one of the statements is true	x < 5 || x < 4	
!	  Logical not	  Reverse the result, returns false if the result is true	!(x < 5 && x < 10) */

#include <stdio.h>
int main(){
    int x = 5;
    int y = 3;
    if (x > 3 && y < 10){
        printf("Both are true");
    }
// Output: Both are true
    if (x > 3 || y < 10){
        printf("One of them is true");
    }
// Output: One of them is true
    if (!(x > 3 && y < 10)){
        printf("Both are false");
    }
// Output: Both are false
  return 0;  
}
