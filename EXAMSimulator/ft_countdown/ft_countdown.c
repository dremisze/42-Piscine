#include <unistd.h>

void	ft_countdown(void);

void	ft_countdown(void)
{
	char	i;

	i = '9';
	while (i >= '0')
	{
		write(1, &i, 1);
		i--;
	}
	write(1, "\n", 1);
}
int main (void)
{
	ft_countdown();
	return 0;
	
}
