/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:00:52 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/17 15:50:51 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while ((i + j) < len && big[i + j] == little[j] && little[j] != '\0')
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char    str1[] = "how are you?";
//     char    str2[] = "are";
//     char    str3[] = "hello";
//     char    *result1;
//     char    *result2;
//     result1 = ft_strnstr(str1, str2, sizeof(str1));
//     result2 = ft_strnstr(str1, str3, sizeof(str1));
//     if (result1)
//     {
//         printf("Found: %s\n", result1);
//     }
//     else
//     {
//         printf("Not found\n");
//     }
//     if (result2)
//     {
//         printf("Found: %s\n", result2);
//     }
//     else
//     {
//         printf("Not found\n");
//     }
//     return (0);
// }