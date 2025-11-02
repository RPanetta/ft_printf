/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:27:25 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/08 14:53:21 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
	{
		i += 32;
	}
	return (i);
}

// int main(void)
// {
//     int i = 0;
//     char str[] = "Hello";
//     while(str[i] != '\0')
//     {
//         printf("%c", ft_tolower(str[i]));
//         i++;
//     }
//     return(0);
// }