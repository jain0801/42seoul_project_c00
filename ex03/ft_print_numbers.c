#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void)
{
	char i;
	char n;

	i='0';
	n='\n';

	while (i<='9')
	{
		write(1,&i, 1);
		write(1,&n, 1);
		i++;
	}
}

int	main(void){
	ft_print_numbers();
	return (0);
}
