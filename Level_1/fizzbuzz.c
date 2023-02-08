#include <unistd.h>

void ft_writenum(int num)
{
	if (num > 9)
		ft_writenum(num / 10);
	write(1, &"0123456789"[num % 10], 1);
}


int main(void)
{
	int num = 1;
	while (num <= 100)
	{
		if (num % 5 == 0 && num % 3 == 0)
			write(1, "fizzbuzz", 8);
		else if (num % 5 == 0)
			write(1, "buzz", 4);
		else if (num % 3 == 0)
			write(1, "fizz", 4);
		else
			ft_writenum(num);
		write(1, "\n", 1);
		num++;
	}
	return (0);
}