#include <stdio.h>
#include "Array.h"

void Display(struct Array *arr)
{
	int i;
	printf("\nElements are\n");
	for (i = 0; i < arr->length; i++)
		printf("%d ", arr->A[i]);
}