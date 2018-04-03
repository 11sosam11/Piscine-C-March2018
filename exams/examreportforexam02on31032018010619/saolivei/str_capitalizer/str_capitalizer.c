#include <unistd.h>

int	main(int c, char **v)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (c == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (((v[1][j + 1] == '\0') && (v[i][j] >= 97 && v[i][j] <= 122)) && c == 2)
	{
		v[i][j] -= 32;
		write(1, &v[i][j], 1);
		write(1, "\n", 1);
		return (0);
	}
	if (((v[1][j + 1] == '\0') && (v[i][j] >= 65 && v[i][j] <= 90)) && c == 2)
	{
		write(1, &v[i][j], 1);
		write(1, "\n", 1);
		return (0);
	}
	while (i < c)
	{
		j = 0;
		while (v[i][j] != '\0')
		{
			if ((v[i][j - 1] == '\0' || v[i][j - 1] == ' ' || v[i][j - 1] == '\t' ) && (v[i][j] >= 97 && v[i][j] <= 122))
				v[i][j] -= 32;
			else if ((v[i][j - 1] >= 33) && (v[i][j] <= 90 && v[i][j] >= 65))
				v[i][j] += 32;
			write(1, &v[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
