/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:01:36 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/16 16:38:28 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	bytes;

	str = (unsigned char *)s;
	bytes = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == bytes)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char	str[] = "Example string";
// 	char	*ptr;
// 	ptr = ft_memchr(str, 'p', sizeof(str));
// 	if (ptr != NULL)
// 	{
// 		printf("Letter found: %s\n", ptr);
// 	}
// 	else
// 	{
// 		printf("Letter not found.\n");
// 	}
// 	return (0);
// }