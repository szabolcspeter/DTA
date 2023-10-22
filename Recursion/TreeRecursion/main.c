#include <stdio.h>

void fun(int n)
{
	if (n > 0)
	{
		printf("%d ", n);
		fun(n - 1);
		fun(n - 1);
	}
}

int main()
{
	fun(3);
	return 0;
}

//Tree Recursion:
//-----------------------
// * IN THIS CASE *
//Time : O(2 ^ n)   // (2^(n+1)) - 1 
//Space : O(n)