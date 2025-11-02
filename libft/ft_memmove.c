/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:47:30 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/24 16:07:57 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = -1;
	if (!src && !dest)
		return (NULL);
	if (d < s)
	{
		while (++i < n)
			d[i] = s[i];
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}
// int main(void)
// {
// 	char	a[] = "Hello";
// 	char	b[] = "banana";
// 	ft_memmove(b, a, 5);
// 	printf("Destination: %s\n", b);

// 	char	a2[] = "banana";
// 	char	b2[20];
// 	ft_memmove(b2, a2, sizeof(a2));
// 	printf("Destination: %s\n", b2);
// 	return (0);
// }