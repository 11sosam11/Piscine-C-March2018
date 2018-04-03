#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 25;
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] < 64 || (argv[1][i] >= 90 && argv[1][i] <= 96) || argv[1][i] > 122)
			i++;
		if (argv[1][i] == 65)
		{
			argv[1][i] = 90;
			i++;
		}
		if (argv[1][i] == 66)
		{
			argv[1][i] = 89;
			i++;
		}
		if (argv[1][i] == 67)
		{
			argv[1][i] = 88;
			i++;
		}
		if (argv[1][i] == 68)
		{
			argv[1][i] = 87;
			i++;
		}
		if (argv[1][i] == 69)
		{
			argv[1][i] = 86;
			i++;
		}
		if (argv[1][i] == 70)
		{
			argv[1][i] = 85;
			i++;
		}
		if (argv[1][i] == 71)
		{
			argv[1][i] = 84;
			i++;
		}
		if (argv[1][i] == 72)
		{
			argv[1][i] = 83;
			i++;
		}
		if (argv[1][i] == 73)
		{
			argv[1][i] = 82;
			i++;
		}
		if (argv[1][i] == 74)
		{
			argv[1][i] = 81;
			i++;
		}
		if (argv[1][i] == 75)
		{
			argv[1][i] = 80;
			i++;
		}
		if (argv[1][i] == 76)
		{
			argv[1][i] = 79;
			i++;
		}
		if (argv[1][i] == 77)
		{
			argv[1][i] = 78;
			i++;
		}
		if (argv[1][i] == 97)
		{
			argv[1][i] = 122;
			i++;
		}
		if (argv[1][i] == 98)
		{
			argv[1][i] = 121;
			i++;
		}
		if (argv[1][i] == 99)
		{
			argv[1][i] = 120;
			i++;
		}
		if (argv[1][i] == 100)
		{
			argv[1][i] = 119;
			i++;
		}
		if (argv[1][i] == 101)
		{
			argv[1][i] = 118;
			i++;
		}
		if (argv[1][i] == 102)
		{
			argv[1][i] = 117;
			i++;
		}
		if (argv[1][i] == 103)
		{
			argv[1][i] = 116;
			i++;
		}
		if (argv[1][i] == 104)
		{
			argv[1][i] = 115;
			i++;
		}
		if (argv[1][i] == 105)
		{
			argv[1][i] = 114;
			i++;
		}
		if (argv[1][i] == 106)
		{
			argv[1][i] = 113;
			i++;
		}
		if (argv[1][i] == 107)
		{
			argv[1][i] = 112;
			i++;
		}
		if (argv[1][i] == 108)
		{
			argv[1][i] = 111;
			i++;
		}
		if (argv[1][i] == 109)
		{
			argv[1][i] = 110;
			i++;
		}
		if (argv[1][i] == 78)
		{
			argv[1][i] = 77;
			i++;
		}
		if (argv[1][i] == 79)
		{
			argv[1][i] = 76;
			i++;
		}
		if (argv[1][i] == 80)
		{
			argv[1][i] = 75;
			i++;
		}
		if (argv[1][i] == 81)
		{
			argv[1][i] = 74;
			i++;
		}
		if (argv[1][i] == 82)
		{
			argv[1][i] = 73;
			i++;
		}
		if (argv[1][i] == 83)
		{
			argv[1][i] = 72;
			i++;
		}
		if (argv[1][i] == 84)
		{
			argv[1][i] = 71;
			i++;
		}
		if (argv[1][i] == 85)
		{
			argv[1][i] = 70;
			i++;
		}
		if (argv[1][i] == 86)
		{
			argv[1][i] = 69;
			i++;
		}
		if (argv[1][i] == 87)
		{
			argv[1][i] = 68;
			i++;
		}
		if (argv[1][i] == 88)
		{
			argv[1][i] = 67;
			i++;
		}
		if (argv[1][i] == 89)
		{
			argv[1][i] = 66;
			i++;
		}
		if (argv[1][i] == 90)
		{
			argv[1][i] = 65;
			i++;
		}
		if (argv[1][i] == 122)
		{
			argv[1][i] = 97;
			i++;
		}
		if (argv[1][i] == 121)
		{
			argv[1][i] = 98;
			i++;
		}
		if (argv[1][i] == 120)
		{
			argv[1][i] = 99;
			i++;
		}
		if (argv[1][i] == 119)
		{
			argv[1][i] = 100;
			i++;
		}
		if (argv[1][i] == 118)
		{
			argv[1][i] = 101;
			i++;
		}
		if (argv[1][i] == 117)
		{
			argv[1][i] = 102;
			i++;
		}
		if (argv[1][i] == 116)
		{
			argv[1][i] = 103;
			i++;
		}
		if (argv[1][i] == 115)
		{
			argv[1][i] = 104;
			i++;
		}
		if (argv[1][i] == 114)
		{
			argv[1][i] = 105;
			i++;
		}
		if (argv[1][i] == 113)
		{
			argv[1][i] = 106;
			i++;
		}
		if (argv[1][i] == 112)
		{
			argv[1][i] = 107;
			i++;
		}
		if (argv[1][i] == 111)
		{
			argv[1][i] = 108;
			i++;
		}
		if (argv[1][i] == 110)
		{
			argv[1][i] = 109;
			i++;
		}
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

	
