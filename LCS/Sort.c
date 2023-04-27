
#include "Sort.h"


int8_t insertionSort(int32_t* array, uint8_t arraySize)
{
	int32_t temp,temp2;
	for (int i = 1; i < arraySize; i++)
	{
		temp=array[i];
		for (int j = i; j > 0; j--)
		{
			if (temp < array[j-1])
			{
				array[j]=array[j-1];
				array[j-1]=temp;
			}
		}
	}
}

void printArray(int32_t *array, uint8_t arraySize)
{
	for(int i=0;i<arraySize;i++)
	{
		printf("%d, ",array[i]);
	}
}