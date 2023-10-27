#include <stdio.h>
#include <stdlib.h>
#include "Array.h"

int main()
{
	struct Array arr = { {2,3,4,5,6}, 10, 5 };
		
	// Append(&arr, 10);
	// Insert(&arr, 2, 10);
	// printf("Deleted element: %d\n", Delete(&arr, 0));
	printf("Found at index: %d\n", LinearSearch(&arr, 5));
	Display(&arr);

 	return 0;
}