#ifndef	LIBFT_H
#define	LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct s_list
{
	void	*data;
	struct	s_list	*next;
}	t_list;

void	ft_read_file(char	*file);
void	ft_putstr(char	*str);
void	ft_putchar(char c);

void	ft_reader(int fd, size_t nbytes);

#endif
