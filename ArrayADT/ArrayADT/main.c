#include <stdio.h>
#include <stdlib.h>
#include "Array.h"

int main()
{
	struct Array arr = { {2,3,4,5,6}, 20, 5 };
		
	Display(&arr);

	return 0;
}