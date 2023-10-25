#include <stdio.h>
#include <stdlib.h>
#include "Array.h"

int main()
{
	struct Array arr = { {2,3,4,5,6}, 10, 5 };
		
	// Append(&arr, 10);
	Insert(&arr, 2, 10);
	Display(&arr);

 	return 0;
}