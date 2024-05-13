#include <unistd.h>

void	ft_putstr(char *str)
{
	while (str && *str)
	{
		write(1, str, 1);
		str++;
	}
}

int main()
{
	ft_putstr("Hello");
}