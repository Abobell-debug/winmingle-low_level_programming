/** 
Name: Abdulahi Abiodun Bello
Program: Winmingle Software Engineering
Description: Fix the function largest_number() to return the correct result for any 3 integers. 
**/
#include "main.h"
int largest_number(int a, int b, int c)
{
    int largest;
 
    if (a >= b && b >= c)
        largest = a;
    else if (b >= a && a >= c)
        largest = b;
    else
        largest = c;
 
    return (largest);
}
