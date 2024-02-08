#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int No;
	char name[10];
}staff;

void sort(staff staffs[]);
char *search(staff staffs[], int target);

int main()
{
	staff staffs[10];
	int i, target;
	char *r = 0;
	for (i = 0; i < 10; i++)
	{
		printf("input NO. and name:\n");
		scanf("%d %s", &staffs[i].No, &staffs[i].name);
	}
	printf("\n");
	sort(staffs);
	printf("result:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d %s\n", staffs[i].No, staffs[i].name);
	}
	printf("input number to look for:");
	scanf("%d", &target); 
	r = search(staffs, target);
	printf("\nNO.%d , his name is %s.",target, r);
	free(r);
}

void sort(staff staffs[])
{
	int i, j;
	for (i = 9; i >= 0; i--)
	{
		int max_No = staffs[0].No, index = 0;
		char max_name[10];
		strcpy(max_name, staffs[0].name);
		for (j = 0; j <= i; j++)
		{
			if (staffs[j].No > max_No)
			{
				index = j;
				max_No = staffs[j].No;
				strcpy(max_name, staffs[j].name);
			}
		}
		staffs[index].No = staffs[i].No;
		strcpy(staffs[index].name, staffs[i].name);
		staffs[i].No = max_No;
		strcpy(staffs[i].name, max_name);
	}
}
char *search(staff staffs[], int target)
{
	int i;
	char *r = malloc(11);
	for (i = 0; i < 10; i++)
	{
		if (staffs[i].No == target)
		{
			strcpy(r, staffs[i].name);
			break;
		}
	}
	return r;
}
