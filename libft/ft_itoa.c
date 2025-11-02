/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:28:28 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/26 13:29:15 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_count_int_len(long long n)
{
	unsigned int	i;

	i = 0;
	if (n < 0)
	{
		n = n * (-1);
		i++;
	}
	if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_int_to_str(char *str, int n)
{
	long long		nbr;
	unsigned int	nbr_len;
	unsigned int	i;

	nbr = n;
	nbr_len = ft_count_int_len(nbr);
	str[nbr_len] = '\0';
	i = 0;
	if (nbr == 0)
	{
		str[i] = '0';
		return ;
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	i = nbr_len - 1;
	while (nbr > 0)
	{
		str[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		i--;
	}
}

//Description: Allocates memory (using malloc) and
// returns a string representing the integer received as an argument.
// Negative numbers must be handled.
char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	nbr_len;

	nbr_len = ft_count_int_len((long long)n);
	str = (char *)malloc(nbr_len + 1);
	if (str == NULL)
		return (NULL);
	ft_int_to_str(str, n);
	return (str);
}
// int main(void)
// {
// 	char	*result;
// 	result = ft_itoa(-2345);
// 	printf("%s\n", result);
// 	printf("%s\n", ft_itoa(-12345));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(-12));
// 	printf("%s\n", ft_itoa(4528));
// 	printf("%s\n", ft_itoa(8888888));
// 	printf("%s\n", ft_itoa(3));
// 	free(result);
// 	return (0);
// }