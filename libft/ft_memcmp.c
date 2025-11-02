/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:37:53 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/17 18:18:27 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char str1[] = "Hello";
//     char str2[] = "Hello";
//     char str3[] = "hello";
//     char str4[] = "Hella";
//     printf("%d\n", ft_memcmp(str1, str2, 6));
//     printf("%d\n", ft_memcmp(str1, str3, 6));
//     printf("%d\n", ft_memcmp(str2, str4, 6));
//     printf("%d\n", ft_memcmp(str3, str4, 6));
//     printf("%d\n", ft_memcmp(str1, str4, 6));
//     return (0);
// }