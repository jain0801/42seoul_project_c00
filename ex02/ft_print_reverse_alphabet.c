#include <stdio.h>
#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char c;
	char n;

	c = 'z';
	n = '\n';

	while (c >= 'a')
	{
		write(1,&c,1);
		write(1,&n,1);
		c-=1;
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
}
