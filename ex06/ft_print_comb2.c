#include <unistd.h>

void	plus(char *b, char *f)
{
	if (f[1] != '9')
	{
		b[0] = f[0];
		b[1] = f[1] + 1;
	}
	else
	{
		b[0] = f[0]+1;
		b[1] = '0';
	}
}


int	compare(char *c1, char *c2)
{
	if (c1[0] <= c2[0])
		return 1;
	else if (c1[0] == c2[0])
	{
		if (c1[1] >= c2[1])
			return 0;
		else
			return 1;
	}
	return 0;
}

void	ft_print_comb2(void)
{
	char i[2];
	char j[2];

	i[0] = '0';
	i[1] = '0';
	j[0] = '0';
	j[1] = '1';
	
	
	write(1, i, 2);

	while (compare(i, "98"))
	{
		plus(j, i);
		while (compare(j, "99"))
		{
			write(1, i, 2);
			write(1, " ",1);
			write(1, j ,2);
			if (i != "98" | j != "99")
				write(1, ", ", 2);
			plus(j, j);
		}
		plus(i, i);
	}
}

int main(void)
{
	ft_print_comb2();
}
