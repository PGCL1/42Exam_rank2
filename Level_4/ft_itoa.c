#include <stdlib.h>

char *ft_itoa(int nbr)
{
	long num = nbr;
	char *result = 0;
	int len = 0;

	if (nbr < 0)
	{
		num *= -1;
		len++;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	if (!(result = malloc(sizeof(char) * (len + 1))))
		return NULL;
	if (nbr < 0)
		result[0] = '-';
	result[len--] = '\0';
	if (nbr == 0)
		result[0] = '0';
	if (nbr < 0)
	{
		num = nbr * -1;
		while (len > 0)
		{
			result[len--] = (num % 10) + '0';
			num /= 10;
		}
		return (result);
	}
	else
	{
		num = nbr;
		while (len >= 0)
		{
			result[len--] = (num % 10) + '0';
			num /= 10;
		}
		return (result);
	}	
}
