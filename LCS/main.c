#include<stdio.h>
#include<stdint.h>
#include<process.h>
#include "Sort.h"
#include "LCS.h"

void main()
{
	while(1)
	{
		char stop;
	uint8_t LCS=0;
	int error;
	int32_t arr[10],n;
	printf("enter number of elements elements\n");
	scanf("%d",&n);
	if(n>0&&n<=10)
	{
		printf("enter %d elements\n",n);
	for(int i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);		
	}
	insertionSort(arr,n);
	}
	
	//printArray(arr,n);
	
	error = lcsGetSize(arr, n, &LCS);
	if(error == -1)
	{
			printf("no array elements\n");
	}
	else if(error == -2)
		{
			printf("array size is more than 10 elements\n");
		}
	else if(error == -3)
		{
			printf("No consecutive sequence\n");
		}
	else if(error == 0)
		{
			printf("LCS size = %d\n",LCS);
		}
	}
	system("pause");
}