#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int power(int x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	return x * power(x, n - 1);
 } 
int getint(char *str, int a[])
{
	char *prv = str;
	int buffer[50], digit = 0, count = 0, i;
	int *b = &buffer[0];
	int *b_c = buffer;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			*b++ =  *str - '0';
			prv = str;
			str++;
			digit++;
		}
		else
		{	
			if(digit > 0)
			{
				int num = 0;
				for (i = 0; i < digit; i++)
				{
					num += b_c[i] * power(10, digit - i - 1);
				}
				a[count] = num;
				count++;
				b= b_c;
				digit = 0;
			}
			str++;
		}
	}
	if (digit > 0)
	{
		int num = 0;
		for (i = 0; i < digit; i++)
		{
			num += b_c[i] * power(10, digit - i - 1);
		}
		a[count] = num;
		count++;
	}
	return count;
}

int main()
{
	char str[100];
	gets(str);
	int a[100];
	int count = getint(str, a);
	printf("%d ", count);
	int i;
	for (i = 0; i < count; i++)
	{
		printf("%d ", a[i]);
	}
}
