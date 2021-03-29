#include <unistd.h>

void	print_n(int n, int o, char m1, char m2)
{
	if (n > 0 && n < 9-o)
	{	
		write(1, &m2, 1);
		if (m2 == '9')
			print_n(o, o, m1+1, '0');
		else
			print_n(n-1,o, m1, m2+1);	
	}
	
}

void	dft(int n)
{
	char *arr = "0123456789";
	int i;

	i = 0;
	//while (i <= 9-n)
	//{
	print_n(n,n, '0', '0');
	//	i++;
	//}
}
int main(void)
{
	dft(2);
}
