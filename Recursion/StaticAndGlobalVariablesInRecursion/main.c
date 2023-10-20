#include <stdio.h>

// This is a global variable x
int x = 0;

int fun(int n)
{
	// static int x = 0;
	if (n > 0)
	{
		x++;
		return fun(n - 1) + x;
	}
	return 0;
}

int main()
{
	int r;
	r = fun(5);
	printf("%d\n", r);

	return 0;
}

// Result: 25