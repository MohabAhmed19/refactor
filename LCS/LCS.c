#include "LCS.h"

int8_t lcsGetSize(int32_t *array, uint8_t arraySize, uint8_t *sizeofLCS)
{
	int max=0,current=0;
	if(arraySize==0)
	{
		return -1;
	}
	else if(arraySize>10)
	{
		return -2;
	}
	for(int i=0;i<arraySize-1;i++)
	{
		if(array[i+1]==(array[i]+1))
		{		
			current++;
		}
		else
		{
			current=0;
		}
		if(current>0 && current+1>max)
		{
			max=current+1;
		}
		*sizeofLCS=max;
	}
	if(max==0)
	{
		return -3;
	}
	else
	{
		return 0;
	}
}