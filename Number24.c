#include<stdio.h>

void add(void);
void product(void);
void subtract(void);
void division(void);
void menu(void);

int main()
{
	menu();
	return 0;
}

void menu(void)
{
	int option = 0;
	puts("1 : ADDITION");
	puts("2 : SUBTRACTION");
	puts("3 : DIVISION");
	puts("4 : MULTIPLICATION");
	puts("CHOOSE YOUR OPTION...");
	scanf("%d",&option);
	if(option == 1)
	   add();
	else if(option == 2)
	   subtract();
	else if(option == 3)
	   division();
	else if(option == 4)
	   product();
	else 
	   printf("WRONG OPTION....");
}

void add(void)
{
	int num1=0, num2=0, sum=0;
	printf("Enter first number.....");
	scanf("%d",&num1);
	printf("Enter second number.....");
	scanf("%d",&num2);
	sum = num1 + num2;
	printf("The Addition of %d and %d is: %d",num1,num2,sum);
}

void subtract(void)
{
	int num1=0, num2=0, sub=0;
	printf("Enter first number.....");
	scanf("%d",&num1);
	printf("Enter second number.....");
	scanf("%d",&num2);
	sub = num1 - num2;
	printf("The Subtraction of %d from %d is %d",num1,num2,sub);
}

void division(void)
{
	int num1=0, num2=0;
	float div=0.0;
	printf("Enter first number.....");
	scanf("%d",&num1);
	printf("Enter second number.....");
	scanf("%d",&num2);
	div = (float)num1 / (float)num2;
	printf("\nThe Division of %d by %d is %.3f",num1,num2,div);
}

void product(void)
{
	int num1=0, num2=0, prod=0;
	printf("Enter first number.....");
	scanf("%d",&num1);
	printf("Enter second number.....");
	scanf("%d",&num2);
	prod = num1 * num2;
	printf("\nThe Multiplication of %d and %d is: %d",num1,num2,prod);
}