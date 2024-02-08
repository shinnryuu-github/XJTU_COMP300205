#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *mystrcpy(char *s2)
{
	char *s1 = malloc(strlen(s2) + 1);
	char *copy = s1;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;	
	}	
	*s1 = '\0';
	return copy;
}

int main()
{
	char s2[100];
	printf("input s2:");
	gets(s2);
	char *s1 = mystrcpy(s2);
	printf("s1:%s",s1);
	free(s1);
}
