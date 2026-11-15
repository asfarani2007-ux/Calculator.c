#include<stdio.h>
int main()
{
int number1,number2;
char operation;
printf("enter the first number:");
scanf("%d",&number1);
printf("enter an operation(+,-,*,/):");
scanf("%c",&operation);
printf("enter the second number:");
scanf("%d",&number2);
switch (operation)
{
case '+':
printf("Answer:%d\n",number1+number2);
break;

case '-':
printf("Answer:%d\n",number1-number2);
break;

case'*':
printf( "Answer:%d\n",number1*number2);
break;

case'/':
if (number2 !=0)
printf("you cannot divide by zero.\n");
else
printf("Answer:%d\n",number1/number2);
break;
deafault:
printf("Invalid operation.\n");
}
return 0;
}