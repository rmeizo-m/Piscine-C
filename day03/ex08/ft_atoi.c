int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	c;

	c = 1;
	i = 0;
	res = 0;
	while (str[i] != '\0' && ((str[i] >= '0' && str[i] <= '9') ||
			(i == 0 && (str[0] == '-' || str[0] == '+'))))
	{
		if (str[i] == '-' || str[i] == '+')
		{
			i++;
			continue;
		}
		res = (res * c) + (str[i] - 48);
		c = 10;
		++i;
	}
	if (str[0] == '-')
		res *= -1;
	return (res);
}
