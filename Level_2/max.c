int max(int *tab, unsigned int len)
{
	int max = tab[0];
	for (int i = 0; i < len; i++){
		if (tab[i] > max)
			max = tab[i];
	}
	return max;
}
