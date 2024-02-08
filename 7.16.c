#include <stdio.h>
#include <string.h>

int hex_to_dec(char *hex);
int power(int x, int n);

int main()
{
	int dec;
	char hex[20];
	printf("input a HEX number:");
	scanf("%s", hex);
	dec = hex_to_dec(hex);
	printf("\ndecimal number %d", dec);
}

int power(int x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	return x * power(x, n - 1);
}
int hex_to_dec(char *hex)
{
	int len = strlen(hex);
	int sum = 0, i;
	for (i = 0; i < len; i++)
	{
		if (hex[i] >= '0' && hex[i] <= '9')
		{
			sum += (hex[i] - '0') * power(16, len - 1 - i);
		}
		else if (hex[i] >= 'A' && hex[i] <= 'F')
		{
			sum += (hex[i] - 'A' + 11) * power(16, len - 1 - i);
		}
		else if (hex[i] >= 'a' && hex[i] <= 'f')
		{
			sum += (hex[i] - 'a' + 11) * power(16, len -i - 1);
		}
	}
	return sum;
}
