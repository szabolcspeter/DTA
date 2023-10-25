#ifndef ARRAY_H
#define ARRAY_H

struct Array
{
	int A[10];
	int size;
	int length;
};

void Display(struct Array *arr);

void Append(struct Array* arr, int x);

#endif