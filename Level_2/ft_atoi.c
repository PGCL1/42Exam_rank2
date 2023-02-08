int ft_isspace(char c)
{
	if (c >= 9 && c <= 13 || c == 32)
		return (1);
	return (0);
}

int ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	while (str[i])
	{
		if (ft_isspace(str[i]))
			i++;
		else if (str[i] == '-')
		{
			sign *= -1;
			i++;
		}
		else if (str[i] == '+')
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + str[i] - '0';
			i++;
		}
		else
			return(result * sign);
	}
	return (result * sign);
}
/* 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	const char *str = "+13268!";
	printf("Mine: %d\n", ft_atoi(str));
	printf("Theirs: %d", atoi(str));
	return (0);
} */

/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*/

/* char to int formula:
result = result * 10 + str[i] - '0' */