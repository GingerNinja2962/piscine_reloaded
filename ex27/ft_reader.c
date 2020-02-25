#include <libft.h>

int	*ft_reader(int fd, size_t nbytes)
{
	char	buffer[nbytes];
	int	i;

	i = read(fd, buffer, nbytes);
	if (i != -1)
	{
		ft_reader(fd, (nbytes + 1));
		return (0);
	}
	read(fd, buffer, (nbytes - 1));
	buffer[nbytes - 1] = '\0';
	ft_putstr(buffer);
	return (0);
}
