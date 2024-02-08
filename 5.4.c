#include <stdio.h>
#include <string.h>

int main()
{
	char ch;
	int a=0,b=0,c=0,d=1;
	while((ch = getchar()) != EOF && ch != '\n')
	{
		if ((ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A'))
		{
			a++;
		}
		else if (ch == ' ')
		{
			b++;
		}
		else if (ch <= '9' && ch >= '0')
		{
			c++;
		}
		else
		{
			d++;
		}
	}
	printf("英文字母%d\n空格%d\n数字%d\n其他字符%d\n", a, b, c, d);
}
