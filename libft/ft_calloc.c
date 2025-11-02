/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:01:47 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/24 14:57:35 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Description: function is used to allocates the requested memory
// and returns a pointer to it. It reserves a block of memory for array
// of objects and initialize all bytes in the allocated storage to zero.
void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*resultpointer;
	size_t			totalsize;
	size_t			i;
	unsigned char	*p;

	if (nmemb == 0 || size == 0)
	{
		return (malloc(0));
	}
	totalsize = nmemb * size;
	if (totalsize / nmemb != size)
	{
		return (NULL);
	}
	resultpointer = malloc(totalsize);
	if (resultpointer == NULL)
		return (NULL);
	p = (unsigned char *)resultpointer;
	i = 0;
	while (i < totalsize)
	{
		p[i] = 0;
		i++;
	}
	return (resultpointer);
}

// int main(void)
// {
//     int *arr;
//     int i;

//     arr = (int *)ft_calloc(3, sizeof(int));
//     if (!arr)
//     {
//         printf("Error: no memory\n");
//         return (1);
//     }
//     i = 0;
//     while (i < 3)
//     {
// 		// printf("%d\n", arr[i]);
//         printf("arr[%d] = %d\n", i, arr[i]);
//         i++;
//     }
//     free(arr);
//     return (0);
// }