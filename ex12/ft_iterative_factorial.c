int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb > 12 || nb < 1)
		return (0);
	while (nb > 1)
		i = (i * nb--);
	return (i);
}
