#include <stdio.h>
#include <string.h>

int cul(int y, int m, int d);
int run(int y);
void *l(int total, char *last);

int main()
{
	int y, m, d, total = 0;
	char last[3];
	printf("input date(year,month,day):");
	scanf("%d,%d,%d", &y, &m, &d);
	total = cul(y, m ,d);
	l(total, last);
	printf("%d/%d/%d is the %d%s day in this year.", y, m ,d, total, last);
}

void *l(int total, char *last)
{	
	if (total==1 || total == 21 || total == 31)
	{
		strcpy(last, "st");
	}
	else if (total == 2|| total == 22)
	{
		strcpy(last, "nd");
	}
	else if (total == 3 || total == 23)
	{
		strcpy(last, "rd");
	}
	else
	{
		strcpy(last, "th");
	}
}
int run(int y)
{
	if (y % 100 == 0)
	{
		if (y % 400 ==0)
		{
			return 1;
		}
		return 0;
	}
	else
	{
		if (y % 4 == 0)
		{
			return 1;
		}
		return 0;
	}
}
int cul(int y, int m, int d)
{
	int total = d;
	switch(m)
	{
		case 1:
			break;
		case 2:
			total += 31;
			break;
		case 3:
			if(run(y))
			{
				total += 31+29;
				break;
			}
			total += 31+28;
			break;
		case 4:
			if(run(y))
			{
				total += 31+29+31;
				break;
			}
			total += 31+28+31;
			break;
		case 5:
			if(run(y))
			{
				total += 31+29+31+30;
				break;
			}
			total += 31+28+31+30;
			break;
		case 6:
			if(run(y))
			{
				total += 31+29+31+30+31;
				break;
			}
			total += 31+28+31+30+31;
			break;
		case 7:
			if(run(y))
			{
				total += 31+29+31+30+31+30;
				break;
			}
			total += 31+28+31+30+31+30;
			break;
		case 8:
			if(run(y))
			{
				total += 31+29+31+30+31+30+31;
				break;
			}
			total += 31+28+31+30+31+30+31;
			break;
		case 9:
			if(run(y))
			{
				total += 31+29+31+30+31+30+31+31;
				break;
			}
			total += 31+28+31+30+31+30+31+31;
			break;
		case 10:
			if(run(y))
			{
				total += 31+29+31+30+31+30+31+31+30;
				break;
			}
			total += 31+28+31+30+31+30+31+31+30;
			break;
		case 11:
			if(run(y))
			{
				total += 31+29+31+30+31+30+31+31+30+31;
				break;
			}
			total += 31+28+31+30+31+30+31+31+30+31;
			break;
		case 12:
			if(run(y))
			{
				total += 31+29+31+30+31+30+31+31+30+31+30;
				break;
			}
			total += 31+28+31+30+31+30+31+31+30+31+30;
			break;
	}
	return total;
}
