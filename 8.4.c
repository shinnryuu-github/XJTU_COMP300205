#include <stdio.h>
#include <stdlib.h>

void move(int nums[], int n, int m);

int main()
{
	int n, m, i;
	int *nums;
	printf("how many numbers?");
	scanf("%d", &n);
	printf("input %d numbers:\n", n);
	nums = (int*) malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
	{
		scanf("%d", &nums[i]);
	}
	printf("how many place you want move?");
	scanf("%d", &m);
	printf("\nNow,they are:\n");
	move(nums, n, m);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d  ", nums[i]);
	}
	printf("%d", nums[n-1]);
}

void move(int nums[], int n, int m)
{
	int *b = (int*) malloc(m * sizeof(int));
	int i;
	for (i = n - m; i < n; i++)
	{
		b[i - n + m] = nums[i];
	}
	for (i = n - m - 1; i >= 0; i--)
	{
		nums[i + m] = nums[i];
	}
	for (i = 0; i < m; i++)
	{
		nums[i] = b[i];
	}
	free(b);
}
