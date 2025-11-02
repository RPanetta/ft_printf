/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:40:25 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/26 17:40:25 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Description: Deletes and frees the given node and all its
// successors, using the function ’del’ and free.
// Finally, set the pointer to the list to NULL.
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current_node;
	t_list	*next_node;

	if (!lst || !*lst || !del)
		return ;
	current_node = *lst;
	next_node = (*lst)->next;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		ft_lstdelone(current_node, del);
		current_node = next_node;
	}
	*lst = NULL;
}
// static void	ft_del(void *content)
// {
// 	free(content);
// }
// int main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	node1 = malloc(sizeof(t_list));
// 	node2 = malloc(sizeof(t_list));
// 	node3 = malloc(sizeof(t_list));
// 	node1->content = ft_strdup("first node");
// 	node2->content = ft_strdup("second node");
// 	node3->content = ft_strdup("third node");
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	printf("Before the function:\n");
// 	printf("Node 1: %s\n", (char *)node1->content);
// 	printf("Node 2: %s\n", (char *)node2->content);
// 	printf("Node 3: %s\n", (char *)node3->content);
// 	ft_lstclear(&node1, ft_del);
// 	printf("After the function:\n");
// 	if(node1 == NULL)
// 		printf("The list has been completely cleaned\n");
// 	return (0);
// }