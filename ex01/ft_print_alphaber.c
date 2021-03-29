#include <stdio.h>
#include <unistd.h>

void ft_print_alphabet(void){
	char c;
	char n;

	c = 'a';
	n = '\n';

	while (c <= 'z')
	{
		write(1,&c,1);
		write(1,&n,2);
		c+=1;
	}
}

int main(void)
{
	ft_print_alphabet();
	return (0);
}
