/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:46:45 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/17 23:59:08 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	int	i;

	len = ft_strlen((char *) s);
	if ((char) c == '\0')
	{
		return ((char *)(s + len));
	}
	i = len - 1;
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}
// int main(void)
// {
// 	char	string[] = "how are you??????";
// 	char	letter = 'o';
// 	char	*result;
// 	result = ft_strrchr(string, letter);
// 	printf("string after %c\nis: %s\n", letter, result);
// 	return(0);
// }