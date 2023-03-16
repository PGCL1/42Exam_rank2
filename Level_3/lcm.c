unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int num;
	if (a == 0 || b == 0) 
		return (0);
	(a > b) ? (num = a) : (num = b);
	while (1)
	{
		if (num % a == 0 && num % b == 0)
			return (num);
		++num;
	}
}
