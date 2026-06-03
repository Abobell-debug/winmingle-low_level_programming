 /**
 * Author: Abdulahi Abiodun Bello
 * Program: WinMingle Community C Training
 * Description: A program to print all the numbers of base 16 in lowercase.
 */
#include <stdio.h>
int main (void){
int numbers = '0';
int alphabet = 'a';
while(numbers<='9'){
putchar(numbers);
numbers++;
}
while(alphabet<='f'){
putchar(alphabet);
alphabet++;
}
putchar('\n');
return 0;
}





