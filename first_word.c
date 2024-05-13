#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int j;

	j = 0;
	if (ac == 2)
	{
		while ((av[1][j] >= 9 && av[1][j] <= 13) || av[1][j] == 32)
			j++;
		while (av[1][j] && ((av[1][j] < 9 && av[1][j] > 13) || av[1][j] != 32))
			write(1, &av[1][j++], 1);
	}
	write (1, "\n", 1);
	return (0);
}
