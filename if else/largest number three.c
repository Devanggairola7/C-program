#include<stdio.h>
int main()
{int num1,num2,num3;
 printf("Enter the number respectively.");
 scanf("%d %d %d",&num1,&num2,&num3);
 if(num1>num2&&num1>num3)
  printf("greatest number between two is %d",num1);
 else if(num1<num2&&num2>num3)
  printf("Greatest number between two is %d",num2);
 else if(num1<num3&&num3>num2)
  printf("Greatest number between two is %d",num3);
 else
  printf("the number are equal.");
return 0;
}
