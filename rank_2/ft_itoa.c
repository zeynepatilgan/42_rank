#include <stdlib.h>

int	get_len(int nbr)
{
	int	nbr_len;

	nbr_len = 0;
	if (nbr <= 0)
		nbr_len++;
	while (nbr)
	{
		nbr /= 10;
		nbr_len++;
	}
	return (nbr_len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digit;

	digit = get_len(n);
	str = (char *)malloc(digit + 1);
	if (!str)
		return (NULL);
	str[get_len] = '\0';
	if (n == 0)
		*str = '0';
	else if (n < 0)
	{
		if (n == -2147483648)
		{
			return("-2147483648");
		}
		str[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		str[--digit] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}