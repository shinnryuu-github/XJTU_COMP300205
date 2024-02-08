#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[100];
	printf("input string:");
	scanf("%s", s);
	printf("\nThe length of string is %d.", strlen(s));
}
