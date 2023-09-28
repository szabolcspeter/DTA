#include <stdio.h>

void tailRecursionFun(int n)
{
	if (n > 0)
	{
		printf("%d ", n);
		tailRecursionFun(n - 1);
	}
}

void headRecursionFun(int n)
{
	if (n > 0)
	{
		headRecursionFun(n - 1);
		printf("%d ", n);
	}
}

int main()
{
	int x = 3;
	/*tailRecursionFun(x);*/
	headRecursionFun(x);

	return 0;
}