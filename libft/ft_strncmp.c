/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:20:41 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/16 15:07:47 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((int)((unsigned char)str1[i] - (unsigned char)str2[i]));
		}
		if (str1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	printf("%d\n", ft_strncmp("abc", "abc", 3));
// 	printf("%d\n", ft_strncmp("abc", "abd", 3));
// 	printf("%d\n", ft_strncmp("abc", "abb", 3));
// 	printf("%d\n", ft_strncmp("abc", "abcde", 5));
// 	printf("%d\n", ft_strncmp("abc", "abc", 0));
// 	return(0);
// }