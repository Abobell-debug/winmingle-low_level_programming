 /**
 * Author: Abdulahi Abiodun Bello
 * Program: WinMingle Community C Training
 * Description: A program to print the alphabet in lowercase, then uppercase, followed by a new line.
 */
#include <stdio.h>
int main(void){
int lowercase =97;
int uppercase = 65;
while(lowercase<=122){
putchar(lowercase);
lowercase++;
}
while(uppercase<=90){
putchar(uppercase);
uppercase++;
}
putchar('\n');
return 0;
}
