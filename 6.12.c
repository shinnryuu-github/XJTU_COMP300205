#include <stdio.h>

int main()
{
	char pw[100], org[100];
	gets(pw);
	printf("����Ϊ%s\n",pw);
	int i = 0;
	while(pw[i] != '\0')
	{
		if (pw[i] >= 'A' && pw[i] <= 'Z') 
		{
			org[i] = 25 - pw[i] + 'A' + 'A';
		}
		else if (pw[i] >= 'a' && pw[i] <= 'z')
		{
			org[i] = 25 - pw[i] + 'a' + 'a';
		}
		else
		{
			org[i] = pw[i];
		}
		i++;
	}
	org[i] = '\0';
	printf("ԭ��Ϊ%s\n",org); 
}
