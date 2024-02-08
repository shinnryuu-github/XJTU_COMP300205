#include <stdio.h>

typedef struct
{
	int year;
	int month;
	int day;	
} date;

int is_run(date today)
{
	if (today.year % 100 == 0)
	{
		if (today.year % 400 == 0)
		{
			return 1;
		}
		return 0;
	}
	else
	{
		if (today.year % 4 == 0)
		{
			return 1;
		}
		return 0;
	} 
}

char *trs(int number) {
    if (number >= 11 && number <= 13) {
        return "th";
    } else {
        switch (number % 10) {
            case 1:
                return "st";
            case 2:
                return "nd";
            case 3:
                return "rd";
            default:
                return "th";
        }
    }
}

int count(date td)
{
	int num[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (is_run(td))
	{
		num[1] = 29;
	}
	int i, total = 0;
	for (i = 0; i < td.month - 1; i++)
	{
		total += num[i];
	}
	total += td.day;
	return total;
}

int main()
{
	date td;
	int total = 0;
	char *s = NULL;
	scanf("%d,%d,%d", &td.year, &td.month, &td.day);
	total = count(td);
	s = trs(total);
	printf("%d/%d is the %dth day in %d.", td.month, td.day, total, td.year); 
}
