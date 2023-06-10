#include <stdio.h>         //find the constonant amount
#include <string.h>

int main(void){

  char str[100] , ch;
  int i,consonant,others,words;

  printf("Input your string:");
  gets(str);

  i= consonant = others = words = 0;

  while((ch = str[i])!= '\0'){

     if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')

     others++;

     else

     consonant++;

     i++;


  }

  words++;

  printf("The amount of consonant here is %d", consonant);


}
