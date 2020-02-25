#include <libft.h>

void	ft_read_file(char *file)
{
	int		nbytes;
	unsigned int	fd;

	nbytes = 1;
	fd = open(file, O_RDONLY);
	ft_reader(fd, nbytes);
}
