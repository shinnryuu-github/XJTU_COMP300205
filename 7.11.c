#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *sorted(char *str, int len)
{
	int i, j;
	for (i = len - 1; i >= 0; i--)
	{
		char max = str[0];
		int index = 0;
		for (j = 0; j <= i; j++)
		{
			if (str[j] > max)
			{
				max = str[j];
				index = j;
			}
		}
		str[index] = str[i];
		str[i] = max;
	}
	return str;
}


int main()
{
	char str[100];
	printf("input string:\n");
	do
	{
		gets(str);
		if (strlen(str) > 10)
		{
			printf("string too long,input again!input string:\n");
		}
	}while(strlen(str) > 10);
	printf("string sorted:\n%s", sorted(str, strlen(str)));
}
