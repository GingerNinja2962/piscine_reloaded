#include <libft.h>

void	ft_reader(int fd, size_t nbytes)
{
	char	buffer[nbytes];
	
	read(fd, buffer, nbytes);
	ft_putstr(buffer);
}
