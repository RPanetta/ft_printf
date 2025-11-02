/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:26:32 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/26 16:13:51 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Description: Allocates memory (using malloc)
// and returns a copy of ’s1’ with characters from ’set’
// removed from the beginning and the end.
char	*ft_strtrim(char const *s1, char const *set)
{
	int			back;
	int			front;
	char		*new_string;

	if (!s1 || !set)
		return (NULL);
	back = 0;
	front = ft_strlen(s1) - 1;
	while (s1[back] != '\0' && ft_strchr(set, s1[back]))
		back++;
	if (back > front)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[front]))
		front--;
	new_string = malloc(sizeof(char) * ((front - back) + 2));
	if (new_string == NULL)
		return (NULL);
	ft_strlcpy (new_string, &s1[back], (front - back + 2));
	return (new_string);
}
// int main(void)
// {
// 	char	str[] = " +++++++++++++++++++++++, 123453789,,+";
// 	char	character[] = " +,";
// 	char	*new;
// 	new = ft_strtrim(str, character);
// 	printf("%s\n", new);
// 	free(new);
// 	return (0);
// }