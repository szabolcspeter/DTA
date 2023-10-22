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

//Tail recursion:
//-----------------------
// Time : o(n)
// Space : o(n)


//While loop is better:
// 
//while loop:
//-----------------------
//	Time : o(n)
//	Space : o(1)