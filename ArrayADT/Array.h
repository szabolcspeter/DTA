#ifndef ARRAY_H
#define ARRAY_H

struct Array
{
	int A[10];
	int size;
	int length;
};

void Display(struct Array *arr);

/// <summary>Time complexity: O(1)</summary>
void Append(struct Array* arr, int x);

/// <summary>Time complexity:
/// <para>- Best case:  O(1)</para>
/// <para>- Worst case: O(n)</para>
/// </summary>
void Insert(struct Array* arr, int index, int x);

/// <summary>Time complexity:
/// <para>- Best case:  O(1)</para>
/// <para>- Worst case: O(n)</para>
/// </summary>
int Delete(struct Array* arr, int index);

/// <summary>Time complexity:
/// <para>- Best case:  O(1)</para>
/// <para>- Worst case: O(n)</para>
/// </summary>
int LinearSearch(struct Array* arr, int key);

void Swap(int* x, int* y);


#endif