/**
 * Author: Abdulahi Abiodun Bello
 * Program: WinMingle Community C Training
 * Description: A program that print alphabet in lowercase, followed by a new line
 */
#include <stdio.h>
int main (void){
char lower_case = 97;
while(lower_case<=122){
putchar(lower_case);
lower_case++;
}
putchar('\n');
return 0;
}
