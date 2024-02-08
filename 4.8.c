#include <stdio.h>

int main()
{
	float score;
	char g;
	printf("请输入学生成绩:");
	scanf("%f", &score);
	if (score >= 90)
	{
		g = 'A';
	}
	else if (score < 90 && score >= 80)
	{
		g = 'B';
	}
	else if (score < 80 && score >= 70)
	{
		g = 'C';
	}
	else if (score < 70 && score >= 60)
	{
		g = 'D';
	}
	else
	{
		g = 'E';
	}
	printf("成绩是%.1f,相应的等级是%c", score, g);
}

