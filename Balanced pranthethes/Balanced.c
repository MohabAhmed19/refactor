#include "Balanced.h"



int8_t isBalancedParanthethes(uint8_t* expression)
{
	ST_stack_t MyStack;
	int i=0, error, flag = 0, curly = 0, round = 0;
	uint8_t MyData=0;
	createEmptyStack(&MyStack);
	if (strlen(expression) > STACK_SIZE)
	{
		printf("You exceeded the maximum stack size");
		return 5;
	}
	for (i=0;i<strlen(expression);i++)
	{
		if (expression[i] == '{' || expression[i] == '}' || expression[i] == '(' || expression[i] == ')')
		{
			flag=1;
		}
		error = push(&MyStack, expression[i]);
	}
	if (flag == 0)
	{
		return -2;
	}
		
	for (i = 0; i < strlen(expression); i++)
	{
		error = pop(&MyStack, &MyData);
		if (MyData == '}')
			curly++;
		else if (MyData == '{')
			curly--;
		else if (MyData == ')')
			round++;
		else if (MyData == '(')
			round--;
	}
	if (curly < 0 || round < 0)
	{
		return -1;
	}
	else if (curly == 0 && round == 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}