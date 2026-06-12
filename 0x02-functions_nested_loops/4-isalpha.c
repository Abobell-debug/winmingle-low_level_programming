/** Name: Abdulahi Abiodun Bello
Program: Winmingle Software Engineering
Description: a function that checks for alphabetic characters.
**/
#include "main.h"
int _isalpha(int c){
if((c >='a' && c <='z') || (c >= 'A' && c <= 'Z') ){
return 1;
}
else
{
return 0;
}
}



