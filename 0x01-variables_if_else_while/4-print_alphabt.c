 /**
 * Author: Abdulahi Abiodun Bello
 * Program: WinMingle Community C Training
 * Description: To print the alphabet in lowercase except letters q and e, followed by a new line.
**/
#include <stdio.h>
int main(void){
int lowercase = 97;
while (lowercase<=122){
if(lowercase !=101 && lowercase!=113){
putchar(lowercase);
}
lowercase++;
}
putchar('\n');
return 0;
}
