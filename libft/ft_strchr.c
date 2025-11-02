/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:44:11 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/17 23:39:49 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)(s + i));
	}
	return (NULL);
}

// int main(void)
// {
// 	char	array[] = "how are you?";
// 	char	*result;
// 	result = ft_strchr(array, 'e');
// 	if (result != NULL)
// 	{
// 		printf("Found: %s\n", result);
// 		printf("Position: %ld\n", (result - array));
// 	}
// 	else
// 	{
// 		printf("Character not found\n");
// 	}
// 	return(0);
// }