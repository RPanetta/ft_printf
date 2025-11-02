/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:53:44 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/15 17:04:08 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	while (dst[dst_len] != '\0' && dst_len < size)
	{
		dst_len++;
	}
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (dst_len >= size)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && (dst_len + i) < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int main(void)
// {
// 	char	a[] = "apple";
// 	char	b[] = "banana and ";
// 	ft_strlcat(b, a, 20);
// 	printf("%s", b);
// 	return(0);
// }