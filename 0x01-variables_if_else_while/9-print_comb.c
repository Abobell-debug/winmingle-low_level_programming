 /**
 * Author: Abdulahi abiodun Bello
 * Program: WinMingle Community C Training
 * Description: To print all possible combinations of single-digit numbers separated by commas and spaces
 */
#include <stdio.h>
int main(void){
int single_digit = '0';
while(single_digit<='9'){
putchar(single_digit);
if (single_digit < '9'){
putchar(',');
}
single_digit++;
}
putchar('\n');
return 0;
}




