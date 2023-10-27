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

int Delete(struct Array* arr, int index)
{
	if (index >= 0 && index < arr->length)
	{
		int x = arr->A[index];
		for (int i = index;i < arr->length - 1;i++)
		{
			arr->A[i] = arr->A[i + 1];
		}
		arr->length--;
		return x;
	}

	return 0;
}

int LinearSearch(struct Array* arr, int key)
{
	for (int i = 0; i < arr->length;i++)
	{
		if (arr->A[i] == key)
		{
			Swap(&arr->A[i], &arr->A[i-1]);
			return i;
		}
	}
	return -1;
}