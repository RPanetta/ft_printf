/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:16:55 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/24 14:58:56 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Description: checks for an alphanumeric character
int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int main (void)
// {
//     char test1 = '+';
//     char test2 = '2';
//     char test3 = 'a';
//     printf("Is it alphanumeric?: %i\n", ft_isalnum(test1));
//     printf("Is it alphanumeric?: %i\n", ft_isalnum(test2));
//     printf("Is it alphanumeric?: %i\n", ft_isalnum(test3));
// }