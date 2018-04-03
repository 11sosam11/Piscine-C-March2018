int	ft_atoi(const char *str)
{
	int i;
	int sum;
	int flag;

	i = 0;
	sum = 0;
	flag = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ' || str[i] == '+')
		i++;
	while ((str[i] < 48 || str[i] > 57) && str[i] != '-')
		i++;
	if (str[i++] == '-')
		flag = -1;
	while (str[i] >= 48 && str[i] <= 57)
	{
		sum = (sum * 10) + (str[i] - 48);
		i++;
	}
	return (sum * flag);
}
