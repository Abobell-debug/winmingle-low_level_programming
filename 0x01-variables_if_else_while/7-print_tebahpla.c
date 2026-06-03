/**
 * Author: Abdulahi Abiodun Bello
 * Program: WinMingle Community C Training
 * Description: Print the lowercase alphabet in reverse order
 */
#include <stdio.h>
int main (void){
int lower_alphabet = 122;
while(lower_alphabet>=97){
putchar(lower_alphabet);
lower_alphabet--;
}
putchar('\n');
return 0;
}




