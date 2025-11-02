/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:40:32 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/24 14:54:38 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Description: Function places n zero-valued bytes in the area pointed to by s.
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// int main(void)
// {
// 	char	array[5];
// 	size_t	i;
// 	i = 0;
// 	ft_bzero(array, sizeof(array));
// 	while (i < sizeof(array))
// 	{
// 		printf("%d", array[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return(0);
// }