#include <unistd.h>

void ft_putnbr(int num)
{
	if (num > 9)
		ft_putnbr(num / 10);
	write(1, &"0123456789"[num % 10], 1);
}

int main(int argc, char **argv)
{
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}