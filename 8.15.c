#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[10];
	int no;
	int c[5];
}stu;

int main()
{
	stu stus[4];
	int i, sum = 0;
	for (i = 0; i < 4; i++)
	{
	scanf("%s %d %d %d %d %d %d", &stus[i].name, &stus[i].no, &stus[i].c[0], &stus[i].c[1], &stus[i].c[2], &stus[i].c[3], &stus[i].c[4]);
	}
	for (i = 0; i < 4; i++)
	{
		sum += stus[i].c[0];
	}
	int avrg = sum / 4;
	printf("%d", avrg);
	for (i = 0; i < 4; i++)
	{	int sum = 0, f = 0, a = 0, j;
		for (j = 0; j < 5; j++)
		{
			sum += stus[i].c[j];
			if (stus[i].c[j] < 60)
			{
				f++;
			}
			if (stus[i].c[j] > 85)
			{
				a++;
			}
		}
		int avrg = sum / 5;
		if (f >= 2)
		{
			printf("\n%s %d %d %d %d %d %d %d ", stus[i].name, stus[i].no, stus[i].c[0], stus[i].c[1], stus[i].c[2], stus[i].c[3], stus[i].c[4], avrg);
		}
	}
	for (i = 0; i < 4; i++)
	{	int sum = 0, f = 0, a = 0, j;
		for (j = 0; j < 5; j++)
		{
			sum += stus[i].c[j];
			if (stus[i].c[j] < 60)
			{
				f++;
			}
			if (stus[i].c[j] > 85)
			{
				a++;
			}
		}
		int avrg = sum / 5;
		if (a == 5 || avrg > 90)
		{
			printf("\n%s %d %d %d %d %d %d ", stus[i].name, stus[i].no, stus[i].c[0], stus[i].c[1], stus[i].c[2], stus[i].c[3], stus[i].c[4]);
		}
	}
	
}
