#include<stdio.h>
#include<ctype.h>
int main()
{char letter;
 printf("Enter a letter to be checked for vowel or consonant. ");
 scanf("%c",&letter);
 {if(isalpha(letter))
  {if(letter=='a')
   printf("Vowel");
   else if(letter=='e')
   printf("Vowel");
   else if(letter=='i')
   printf("Vowel");
   else if(letter=='o')
   printf("Vowel");
   else if(letter=='u')
   printf("Vowel");
   else 
   printf("Consonant");
 }
 else
 printf("Not an alphabet");
 }
return 0;
}
