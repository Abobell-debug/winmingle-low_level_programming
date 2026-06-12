/**Name: Abdulahi Abiodun Bello
Program: Winmingle Software Engineering
Description: A program that prints 10 times the alphabet, in lowercase, followed by a new line.
**/

#include "main.h"
void print_alphabet_x10(void){
char alpha;
int i;
for (i = 0; i < 10; i++){
    alpha = 'a';
    while(alpha <= 'z'){
    _putchar(alpha);
    alpha++;
   }
   _putchar('\n');
 }
}



