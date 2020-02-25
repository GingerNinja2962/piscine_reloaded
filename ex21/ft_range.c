#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	j;
	int	*array;

	j = 0;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		array[j] = min;
		min++;
		j++;
	}
	return (array);
}
