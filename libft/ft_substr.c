/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:23:36 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/28 12:40:15 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Description: Allocates memory (using malloc) and
// returns asubstring from the string ’s’.
// The substring starts at index ’start’
// and has a maximum length of ’len’.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	real_len;
	char	*substr;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
	{
		substr = malloc(1);
		if (substr == NULL)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	real_len = ft_strlen(s) - start;
	if (real_len > len)
		real_len = len;
	substr = malloc(real_len + 1);
	if (substr == NULL)
		return (NULL);
	i = -1;
	while (++i < real_len)
		substr[i] = s[start + i];
	substr[real_len] = '\0';
	return (substr);
}
// int main(void)
// {
// 	char	*substring = "This is my substring";
// 	substring = ft_substr(substring, 0, 4);
// 	printf("%s\n", substring);
// 	free(substring);
// 	return (0);
// }