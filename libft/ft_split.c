/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:27:33 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/23 17:07:05 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	ft_free_array(char ***array)
{
	int	i;

	i = 0;
	while ((*array)[i] != NULL)
	{
		free((*array)[i]);
		i++;
	}
	free(*array);
	*array = NULL;
}

static void	ft_split_words(char ***array, const char *s, char c, int wordcount)
{
	int	i;
	int	j;
	int	count_letters;

	i = 0;
	j = 0;
	while (i < wordcount)
	{
		count_letters = 0;
		while (s[j] != '\0' && s[j] == c)
			j++;
		while (s[j] != '\0' && s[j] != c)
		{
			j++;
			count_letters++;
		}
		(*array)[i] = ft_substr(s, j - count_letters, count_letters);
		if ((*array)[i] == NULL)
		{
			ft_free_array(array);
			return ;
		}
		i++;
	}
	(*array)[i] = NULL;
}

// Allocates memory (using malloc(3)) and returns an
// array of strings obtained by splitting ’s’ using
// the character ’c’ as a delimiter. The array must
// end with a NULL pointer.
char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	wordcount;

	if (s == NULL)
		return (NULL);
	wordcount = ft_count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (wordcount + 1));
	if (array == NULL)
		return (NULL);
	ft_split_words(&array, s, c, wordcount);
	return (array);
}

// int main(void)
// {
// 	// char	str[] = "JAN-FEB-MAR-APR-MAY-JUN-JUL-AUG-SEP-OCT-NOV-DEC";
// 	char	str[] = "Hello!";
// 	char	delimiter = '-';
// 	char	**new;
// 	int 	i = 0;
// 	new = ft_split(str, delimiter);
// 	printf("[");
// 	while(i < ft_count_words(str, delimiter))
// 	{
// 		printf("%s, ", new[i]);
// 		i++;
// 		if(new[i] == NULL)
// 			printf("NULL]\n");
// 	}
// 	free(new);
// 	return (0);
// }