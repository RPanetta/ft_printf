/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:15:20 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/13 11:31:21 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = s;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// int main(void)
// {
// 	char	array[5];
// 	size_t	i;
// 	i = 0;
// 	ft_memset(array, 65, sizeof(array));
// 	while (i < sizeof(array))
// 	{
// 		printf("%c", array[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return(0);
// }