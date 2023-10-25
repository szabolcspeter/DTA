#include "Array.h"

void Append(struct Array* arr, int x)
{
	if (arr->length < arr->size)
		arr->A[arr->length++] = x;
}

void Insert(struct Array* arr, int index, int x)
{
	if (index >= 0 && index <= arr->length)
	{
		for (int i = arr->length;i > index; i--)
		{
			arr->A[i] = arr->A[i - 1];
		}
		arr->A[index] = x;
		arr->length++;
	}
}