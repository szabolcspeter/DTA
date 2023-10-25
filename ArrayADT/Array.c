#include "Array.h"

void Append(struct Array* arr, int x)
{
	if (arr->length < arr->size)
		arr->A[arr->length++] = x;
}