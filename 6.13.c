#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* mystrcat(char *str1, char *str2);

int main()
{
	char str1[100], str2[100];
	printf("input string1:");
	gets(str1);
	printf("input string2:");
	gets(str2);
	char *str = mystrcat(str1, str2);
	printf("\nThe new string is:%s", str);
	free(str);
} 

char* mystrcat(char *str1, char *str2)
{
	char *r = malloc(strlen(str1) + strlen(str2) + 1);
	char *copy = r;
	while (*str1)
	{
		*r = *str1;
		r++;
		str1++;
	}
	while (*r++ = *str2++);
	return copy;
}
