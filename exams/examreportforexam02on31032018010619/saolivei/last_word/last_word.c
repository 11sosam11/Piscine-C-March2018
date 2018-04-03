#include <unistd.h>

int	main(int c, char **v)
{
	int i;
	int pos;
	char *str;

	i = 0;
	pos = 0;
	str = v[1];
	if (c != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (v[1][i] != '\0')
	{
		if ( v[1][i] >= 33 && v[1][i] <= 126)
		{
			str[pos] = v[1][i];
			pos++;
		}
		else if ((v[1][i] == ' ' || v[1][i] == '\t') && (v[1][i + 1] != ' ' || v[1][i + 1] != '\t' || v[1][i + 1] != '\0'))
		{
			if (v[1][i + 1] >= 33 && v[1][i + 1] <= 126)
				pos = 0;
		}
		i++;
	}
	str[pos] = '\0';
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
