#include <stdio.h>

int main() {
  char c; 
  int lowercase, uppercase;
  printf("Enter an alphabet");
  scanf("%c", c);
  
  lowercase = ( c == 'a' || c == 'e' || c == 'y' || c == 'u' || c == 'i' || c == 'o');
  
  uppercase = ( c == 'A' || c == 'E' || c == 'Y' || c == 'U' || c == 'I' || c == 'O');
  
  if (lowercase || uppercase) 
    printf("%c" is vowel);
   else 
   printf("%c" is consonant);
  return 0;
  }
