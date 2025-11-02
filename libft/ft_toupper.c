/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:27:50 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/16 16:57:17 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		i -= 32;
	}
	return (i);
}

// int main(void)
// {
// 	int i = 0;
//     char str[] = "Hello, world!";
// 	while(str[i] != '\0')
// 	{
// 		printf("%c", ft_toupper(str[i]));
// 		i++;
// 	}
//     return(0);
// }