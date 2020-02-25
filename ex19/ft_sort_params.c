#include <unistd.h>

void	ft_putchar(char c);
void	ft_print(char **str, int argc);

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	k;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = (i + 1);
		while (j < argc)
		{
			k = 0;
			while (argv[i][k] && argv[j][k])
			{
				if (argv[i][k] > argv[j][k])
				{
					temp = argv[i];
					argv[i] = argv[j];
					argv[j] = temp;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	ft_print(argv, argc);
	return (0);
}

void	ft_print(char **str, int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (str[i][j])
			ft_putchar(str[i][j++]);
		ft_putchar('\n');
		i++;
	}
}
