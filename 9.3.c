#include <stdio.h>

typedef struct
{
	int num;
	char name[10];
	int sc[3];
}stu;

void input(stu stus[])
{
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d %s %d %d %d", &stus[i].num, &stus[i].name, &stus[i].sc[0], &stus[i].sc[1], &stus[i].sc[2]);
	}
}

int main()
{
	stu stus[5];
	int i;
	input(stus);
	printf("num name score");
	for (i = 0; i < 5; i++)
	{
		printf("\n%d %s %d %d %d", stus[i].num, stus[i].name, stus[i].sc[0], stus[i].sc[1], stus[i].sc[2] );
	}
}
