#include <unistd.h>

int	main(int c, char **argv)
{
	int i;

	i = 0;
	if (c != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 65 && argv[1][i] < 90)
			argv[1][i] = argv[1][i] + 1;
		else if (argv[1][i] == 90)
			argv[1][i] = 65;
		else if (argv[1][i] >= 97 && argv[1][i] < 122)
			argv[1][i] = argv[1][i] + 1;
		else if (argv[1][i] == 122)
			argv[1][i] = 97;
		i++;
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
