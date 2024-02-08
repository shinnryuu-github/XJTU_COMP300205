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
    for (i = 0; i < 10; i++)
    {
        scanf("%d %s %d %d %d", &stus[i].num, &stus[i].name, &stus[i].sc[0], &stus[i].sc[1], &stus[i].sc[2]);
    }
}

double avrg(stu stus[])
{
	int i, sum = 0;
	double avrg;
	for (i = 0; i < 10; i++)
	{
		sum += stus[i].sc[0] +	stus[i].sc[1] + stus[i].sc[2];
	}
	avrg = sum / 30.0;
	return avrg;
}

int find_high(stu stus[])
{
	int i, sum = 0, max = stus[0].sc[0] + stus[0].sc[1] + stus[0].sc[2], index = 0;
	for (i = 0; i < 10; i++)
	{
		if (max < stus[i].sc[0] + stus[i].sc[1] + stus[i].sc[2])
		{
			max = stus[i].sc[0] + stus[i].sc[1] + stus[i].sc[2];
			index = i;
		}
	}
	return index;
}

int main()
{
    stu stus[10];
    int i, index;
    double avr;
    input(stus);
    printf("总平均成绩为%.2lf", avrg(stus));
    index = find_high(stus);
    avr = (stus[index].sc[0] + stus[index].sc[1] + stus[index].sc[2]) / 3.0;
    printf("\n最高分学生为%d,%s,%.2lf,%.2lf,%.2lf,%.2lf", stus[index].num, stus[index].name, (double)stus[index].sc[0], (double)stus[index].sc[1], (double)stus[index].sc[2], avr);
}
