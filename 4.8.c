#include <stdio.h>

int main()
{
	float score;
	char g;
	printf("������ѧ���ɼ�:");
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
	printf("�ɼ���%.1f,��Ӧ�ĵȼ���%c", score, g);
}

