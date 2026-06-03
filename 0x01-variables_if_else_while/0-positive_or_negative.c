 /**
 * Author: Abdulahi Aiodun Bello
 * Program: WinMingle Community C Training
 * Description: program that assigns a random number to the variable n each time it runs and prints whether the number is positive, negative, or zero.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int n;
srand(time(0));
n=rand()-RAND_MAX/2;
if(n<0){
  printf("%d is negative\n",n);
}
else if(n>0){
  printf("%d is positive\n",n);
 }
else{
  printf("%d is negative",n);
  }
return 0;
}
