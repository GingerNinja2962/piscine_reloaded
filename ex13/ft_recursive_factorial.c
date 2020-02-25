int	ft_recursive_factorial(int nb)
{
	if (nb < 1 || nb > 12)
		return (0);
	if (nb > 1)
		nb = nb * (ft_recursive_factorial(nb - 1));
	else
		return (1);
	return (nb);
}
