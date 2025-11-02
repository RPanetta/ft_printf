/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:31:50 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/19 21:31:58 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
// 	char c1 = '{';
// 	char c2 = ' ';
// 	       //char c3 = 'ƒ';

// 	printf("%i\n", ft_isprint(c1));
// 	printf("%i\n", ft_isprint(c2));
// 	        // printf("%i", ft_isprint(c3));
// }