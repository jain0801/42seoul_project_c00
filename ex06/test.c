#include <unistd.h>
#include <stdio.h>

int     compare(char *c1, char *c2)
{
	        if (c1[0] < c2[0])
			                return 1;
		        else
				        {
						                if (c1[1] > c2[1])
									                        return 0;
								                else
											                        return 1;
										        }
}

int main(void)
{
	int i;
	char *c;

	c = "99";

	i = compare(c, "98");
	printf("%d", i);
}
