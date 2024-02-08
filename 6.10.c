#include <stdio.h>
#include <string.h>
 
int main()
{
    char ch[2][10];
    int a=0,b=0,c=0,d=0,e=0,i,j;
    for (j = 0; j < 2; j++)
    {
    	gets(ch[j]);
	}
    for (j = 0; j < 2; j++)
    {
		for(i = 0; i < 10; i++)
		{
		    if (ch[j][i] <= 'Z' && ch[j][i] >= 'A')
		    {
		        a++;
		    }
		    else if (ch[j][i] <= 'z' && ch[j][i] >= 'a')
		    {
		    	b++;
			}
		    else if (ch[j][i] == ' ')
		    {
		        d++;
		    }
		    else if (ch[j][i] <= '9' && ch[j][i] >= '0')
		    {
		        c++;
		    }
		    else
		    {
		        e++;
		    }
		}
	}
    printf("大写字母个数%d\n小写字母个数%d\n数字个数%d\n空格个数%d\n其他字符个数%d", a, b, c, d, e);
}
