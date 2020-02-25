#include "libft.h"

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	ft_read_file(argv[1]);
	return(0);	
}
