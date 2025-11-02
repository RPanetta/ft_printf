/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:08:01 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/19 21:27:47 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
//     char	c1 = 3;
//     char	c2 = 'g';
//     char	c3 = 'Z';

//     printf("Is it alphabetic?: %i\n", ft_isalpha(c1));
//     printf("Is it alphabetic?: %i\n", ft_isalpha(c2));
// 	printf("Is it alphabetic?: %i\n", ft_isalpha(c3));
//     return(0);
// }