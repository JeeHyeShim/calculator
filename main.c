#include <stdio.h>

int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);

int main(int argc, char* argv[])
{
	int number1, number2, result;
	char operator;

	printf("재미있는 충돌!! ");
	scanf("%d %c %d", &number1, &operator, &number2);


	switch (operator)
	{
		case '+':
			result = add(number1, number2);
			break;
		case '-':
			result = sub(number1, number2);
			break;
		case '*':
			result = multi(number1, number2);
			break;
		case '/':
			result = div(number1, number2);
			break;
	}

	printf("result is %d.\n", result);

	return 0;
}

int add(int number1, int number2)
{
	int result;

	result=number1+number2;
	return result;
}

int sub(int number1, int number2)
{
	number1>number2 ? return number1-number2 : return number2-number1;
}

int multi(int number1, int number2)
{
	return number1 * number2;
}

int div(int number1, int number2)
{
	if(number2!==0){
		return number1 / number2;
	}
	return 0;
}
