// Take a single character  as input, you may benefit from scanf("%c", &ch ); and print("%c", ch) to print the character. 
// Write a program to print the ASCII value of the given character.
#include "stdio.h"
#include "stdlib.h"
#include"string.h"
#include"ctype.h"

int main(){
  char a;
  
  printf("enter the value");
  scanf("%c",&a);
  
  printf("değerin ASCII karsiliği %c=%d",a,a);
  return 0;
  
  
}
