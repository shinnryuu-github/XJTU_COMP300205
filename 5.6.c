int f(int n)
{
	if (n == 0)
	{
		return 1;
	}
	return n * f(n - 1);
}

int main()
{
	int i, sum = 0;
	for (i = 1; i <= 10; i++)
	{
		sum += f(i);
	}
	printf("S=%d",sum);
}
