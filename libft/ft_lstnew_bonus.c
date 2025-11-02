/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 16:34:59 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/26 16:34:59 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Description: Allocates memory (using malloc) and returns a new node.
// The ’content’ member variable is initialized with the given
// parameter ’content’. The variable ’next’
// is initialized to NULL.
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
// int main(void)
// {
// 	t_list	*node1;
// 	char	str[] = "how are you?";
// 	node1 = ft_lstnew(str);
// 	printf("Content: %s\n", (char *)node1->content);
// 	free(node1);
// 	t_list	*node2;
// 	int	i = 8;
// 	node2 = ft_lstnew(&i);
// 	printf("Content: %d\n", *(int *)node2->content);
// 	free(node2);
// 	return (0);
// }