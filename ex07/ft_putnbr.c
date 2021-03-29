#include <unistd.h>
#include <stdio.h>

void	printnbr(int tf, char *c, int len)
{
	if (tf == 0)
	{
		c[len] = '-';
		while (len >= 0)
			write(1, &c[len--], 1);
	}
	else
	{
		len--;
		while (len >= 0)
			write(1, &c[len--], 1);
	}
}

void	ft_putnbr(int nb)
{
	int i;
	int j;
	int len;
	int tf;
	char c[16];

	len = 0;
	tf = 0;

	if (nb > 0)
		tf=1;
	while (nb != 0)
	{
		i = nb / 10;
		j = nb % 10;
		if (j < 0)
			j = -j;
		c[len] = '0'+j;
		nb = i;
		len++;
	}
	printnbr(tf, c, len);
}

int main(void)
{
	ft_putnbr(2147483647);
	//ft_putnbr(-1234);
}
