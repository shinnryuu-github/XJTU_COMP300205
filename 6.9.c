#include <stdio.h>

int main()
{
	int lst[15];
	int target, i;
	for (i = 0; i < 15; i++) 
	{
		scanf("%d", &lst[i]);
    }
    scanf("%d", &target);
    int f = 0, l = 14, is_find = 0;
	int m = (f + l) / 2;
	while (f <= l)
	{
		if (target == lst[m])
		{
			printf("%d",m + 1);
			is_find = 1;
			break;
		}	
		else if (target < lst[m])
		{
			l = m - 1;
			m = (f + l) / 2;
		}
		else if (target > lst[m])
		{
			f = m + 1;
			m = (f + l) / 2;
		}
	} 
	if (! is_find)
	{
		printf("not exist");
	}
}
