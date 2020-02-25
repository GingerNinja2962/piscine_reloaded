#ifndef	LIBFT_H
#define	LIBFT_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	void	*data;
	struct	s_list	*next;
}	t_list;

void	ft_read_file(char*);


#endif
