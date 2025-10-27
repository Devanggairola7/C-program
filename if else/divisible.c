#include<stdio.h>
int main()
{int number;
 printf("enter a number to be checked for divisiblity by 5 or 11.");
 scanf("%d",&number);
 if(number%5==0)
  printf("Divisible by 5 \n");
 else
 printf("Not divisible by 5 \n ");
 if(number%11==0)
 printf("Divisible by 11");
 else
 printf("Not divisible by 11");
return 0;
}
