#include "main.h"
#include <stdio.h>
int positive_or_negative(int i){
for (i = 0; i < 10; i++){
  if (i < 0){
  printf("%d is negative\n", i);
   }
  else if (i == 0){
  printf("%d is zero\n",i);
   }
  else {
  printf("%d is greater than 0\n", i);
   }
return 0;
 }
}
