void	plus(char *b, char *f)
{
	        if (b[1] != 9)
			                f[1] += 1;
		        else
				        {
						                f[1] = '0';
								                f[0] += 1;
										        }
}

int main(void)
{
	char *i;
	char *j;

	i = "00";

	plus(i,i);

	write(
