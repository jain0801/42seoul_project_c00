#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	char na;
	char p;

	na='N';
	p='P';

	if (n>=0)
		write(1,&p,1);
	else
		write(1,&na,1);
}

int	main(void)
{
	int i;
	scanf("%d", &i);
	ft_is_negative(i);
	return (0);
}
