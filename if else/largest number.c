#include<stdio.h>
int main()
{int num1,num2;
 printf("Enter the number respectively.");
 scanf("%d %d",&num1,&num2);
 if(num1>num2)
  printf("greatest number between two is %d",num1);
 else if(num1<num2)
  printf("Greatest number between two is %d",num2);
 else
  printf("the number are equal.");
return 0;
}
