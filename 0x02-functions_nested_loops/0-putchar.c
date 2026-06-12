/**My name: Abdulahi Abiodun Bello
Name of Program: Winmingle Software Engineering
Code Description: "To print _putchar whitout using the putchar or printf funcions but my custom function with main.h, putchar.c files in my home directory to be compiled together" **/

#include "main.h"
int main (void){
char putArray[] = {"_putchar"};
int i;
for (i = 0; i < 8; i++){
_putchar(putArray[i]);
}
_putchar('\n');
return 0;
}
