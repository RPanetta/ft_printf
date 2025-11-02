/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:38:26 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/26 17:38:26 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Description: Takes a node as parameter and frees its content
// using the function ’del’. Free the node itself but
// does NOT free the next node.
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// // This simply frees the memory pointed to by content:
// // Calls function: frees "Content1" and frees node1 itself.
// // But node2 still exists and is fine: ft_lstdelone only deletes one node.
// static void	ft_del(void *content)
// {
// 	free(content);
// }
// int main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	node1 = malloc(sizeof(t_list));
// 	node2 = malloc(sizeof(t_list));
// 	// Used ft_strdup so that each node's content is stored in heap memory;
// 	// memory that I can leter free safely.
// 	node1->content = ft_strdup("Content1");
// 	node2->content = ft_strdup("Content2");
// 	node1->next = node2;
// 	node2->next = NULL;
// 	ft_lstdelone(node1, ft_delete);
// 	printf("%s\n", (char *)node2->content);
// 	ft_lstdelone(node2, ft_delete);
// 	return (0);
// }