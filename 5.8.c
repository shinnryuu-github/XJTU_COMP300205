#include <stdio.h>

int main()
{
	int i;
	printf("parcissus numbers are");
	for (i = 100; i <= 999; i++)
	{
		int copy1 = i, copy2 = i;
		int a, b, c;
		a = copy2 % 10;
		copy2 = copy2 / 10;
		b = copy2 % 10;
		copy2 = copy2 / 10;
		c = copy2 % 10;
		if(copy1 == (a*a*a+b*b*b+c*c*c))
		{
			printf(" %d",copy1);
		}
	}
}
