#include <stdio.h>

int main()
{
	int m,n;
	printf("����������������n,m:");
	scanf("%d, %d",&m, &n);
	int a,b,factor,mul;
	a = 1;
	while(a <= m || a <= b)
	{
		if (m % a == 0 && n % a == 0)
		{
			factor = a;
		}
		a++;
	}
	printf("���ǵ����Լ��Ϊ:%d\n",factor);
	b = m * n;
	while(b >= m && b >= n)
	{
		if (b % m == 0 && b % n == 0)
		{
			mul = b;
		}
		b -= 1;
	}
	printf("���ǵ���С������Ϊ:%d",mul);
}
