#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char n;

	if (nb < 0)
	{
		write (1, "-", 1);
		ft_putnbr (nb * -1);
	}
	if (nb >= 0 && nb <= 9)
	{
		n = nb + 48;
		write (1, &n, 1);
	}
	if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
}

void	fizz_buzz(int nb)
{
	if (nb % 15 == 0)
		write (1, "FizzBuzz\n", 10);
	else if (nb % 3 == 0)
		write (1, "Fizz\n", 6);
	else if (nb % 5 == 0)
		write (1, "Buzz\n", 6);
	else
	{
		ft_putnbr(nb);
		write (1, "\n", 1);
	}
}

int	main()
{
	int nb;

	nb = 1;
	while (nb <= 500)
		fizz_buzz(nb++);
}