#include <stdio.h>

int main()
{
	char origin[] = "China";
	char pass[6];
	int i = 0;
	for(i; i < 5; i++)
	{
		pass[i] = origin[i] + 4;
	}
	pass[5] = '\0';
	printf("password is %s", pass);
}
