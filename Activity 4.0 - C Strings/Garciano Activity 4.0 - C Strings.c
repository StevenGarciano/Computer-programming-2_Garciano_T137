#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  char string[400];
  int i, vowels, consonants, length;

  printf("Input a Sentence: ");
  fgets(string, sizeof(string), stdin);

    i=0;
    while(string[i]!='\0')
    {
        if(string[i]=='a' ||string[i]=='e' ||string[i]=='i' ||string[i]=='o' ||string[i]=='u')
            string[i]=string[i]-32;
        i++;
    }
    printf("String Converted: ");
    puts(string);
    {

    length = strlen(string);
    printf("String Length = %d", length);
    }

    vowels = 0;
    consonants = 0;

    for(i=0; i<length; i++)
    if(string[i] =='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U')
        {
            vowels++;
        }
        else if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z'))
        {
            consonants++;
        }
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
}