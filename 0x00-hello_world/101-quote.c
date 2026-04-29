 /**
 * Author: Abdulahi Bello
 * Program: WinMingle Community C Training
 * Description: A  C program that prints exactly:
and that piece of art is useful" - Dora Korpar, 2015-10-19

to the standard error. 
 */
#include <unistd.h>
int main(void){
    write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",59);
    return (1);
}
