#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_bigger(char *a, char *b)
{
	char *A = a, *B = b;
	while (*A == *B)
	{
		if (*A == '\0')
		{
			return 0;
		}
		A++;
		B++;
	}
	if (*A > *B)
	{
		return 1;
	}
	return 0;
}

void sort(char *strs[])
{
	int i, j;
	for	(i = 9; i >= 0; i--)
	{
		char *max = strs[0];
		int index = 0;
		for (j = 0; j <= i; j++)
		{
			if (is_bigger(strs[j], max))
			{
				max = strs[j];
				index = j;
			}
		}
		strs[index] = strs[i];
		strs[i] = max;
	}
}

int main()
{
	char* strs[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		strs[i] = malloc(sizeof(char) * 50);
		gets(strs[i]);
		printf("\n");
	}
	sort(strs);
	for (i = 0; i < 10; i++)
	{
		printf("%s\n",strs[i]);
		free(strs[i]);
	}
}
