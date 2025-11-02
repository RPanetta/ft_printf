/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:14:12 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/17 22:49:49 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int main(void)
// {
// 	char c1 = ')';
// 	char c2 = '8';
// 	char c3 = 'r';
// 	printf("%i\n", ft_isascii(c1));
// 	printf("%i\n", ft_isascii(c2));
// 	printf("%i\n", ft_isascii(c3));
// }