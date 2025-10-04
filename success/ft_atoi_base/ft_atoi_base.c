#include <unistd.h>
#include <stdio.h>


int	base(char c, int base)
{
	char	*base1;
	char	*base2;

	base1 = "0123456789ABCDEF";
	base2 = "0123456798abcdef";
	while (base--)
	{
		if (base1[base] == c || base2[base] == c)
			return (1);
	}
	return (0);
}

int	value_of(char str)
{
	if (str >= '0' && str <= '9')
		return (str - '0');
	else if (str >= 'a' && str <= 'f')
		return (str - 'a' + 10);
	else if (str >= 'A' && str <= 'F')
		return (str - 'A' + 10);
	return (0);
}

int	is_blank(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	nbr;
	int	sign;

	sign = 1;
	i = 0;
	nbr = 0;
	while (str[i])
	{
		if (str[i] && ((str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F') ||
			str[i] >= '0' && str[i] <= '9'))
			i++;
		else
			return (0);
	}
	i = 0;
	while (is_blank(str[i]))
		i++;
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			sign = -1;
		i++;
	}
	while (base(str[i], str_base))
	{
		nbr = nbr * str_base + value_of(str[i++]);
	}
	return (nbr * sign);
}

int	main()
{
	printf("%d\n", ft_atoi_base("Ceci permet de decouvrir le fonctionnement de ton ft_atoi_base.", 16));

}