#include <unistd.h>

void	print_combn(int n, int n2, char m)
{
	if (m == '











	if (n > 0)
	{
		write(1, &m, 1);
		if (m == '9')
			print_combn(n-1, n);
		else
			print_combn(n-1, n, m+1);
	}
	else
		write(1, ", ",2);
}

void	ft_print_combn(int n)
{
	char c = '0';

	while (c <= '9'-n+1)
	{
		print_combn(n, n, c);
		c++;
	}
}

int main(void)
{
	ft_print_combn(2);
}
