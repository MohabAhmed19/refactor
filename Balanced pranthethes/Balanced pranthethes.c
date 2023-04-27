
#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include "Balanced.h"
#include "Stack.h"


void main()
{
	int error,i=0;
	uint8_t arr[1000];
	printf("enter the expression to be checked\n");
	/*while (arr[i - 1] != '\n')
	{
		scanf("%c", &arr[i]);
		i++;
		printf("%c", arr[i - 1]);
	}*/
	scanf("%s", &arr);
	error = isBalancedParanthethes(arr);
	if (error==-2)
	{
		printf("neither of paranthethes is used");
	}
	if (error == -1)
	{
		printf("parentheses are not balanced");
	}
	else if(error==0)
	{
		printf("parentheses are balanced");
	}
}
