#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int mystrcmp(char *str1, char *str2);


int main()
{
	char str1[100], str2[100];
	printf("input string1:");
	gets(str1);
	printf("\ninput string2:");
	gets(str2);
	printf("\nresult:%d.", mystrcmp(str1, str2));
}


int mystrcmp(char *str1, char *str2)
{
	while (*str1 == *str2)
	{
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
