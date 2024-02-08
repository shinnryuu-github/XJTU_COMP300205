#include <stdio.h>
#include <stdlib.h>

int my_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return *s1 - *s2;	
} 

int main()
{
	char s1[100], s2[100];
	gets(s1);
	gets(s2);
	int r = my_strcmp(s1, s2);
	printf("%d", r);	
} 
