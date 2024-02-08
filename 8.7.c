#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[100], c[100];
	int m;
	printf("input string:");
	scanf("%s", s);
	printf("\nwhich character that begin to copy?");
	scanf("%d", &m);
	if (m > strlen(s))
	{
		printf("\ninput error!");
	}
	else
	{
		printf("\n%s", strcpy(c, &s[m - 1]));
	}
}
