#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

int main()
{
	int a = 9;
	int b = 13;
	ft_swap(&a, &b);
	printf("a == %d, b == %d\n", a, b);
}