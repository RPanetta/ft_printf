/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:42:08 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/26 17:42:08 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Description: Iterates through the list ’lst’ and applies
// the function ’f’ to the content of each node.
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current_node;
	t_list	*next_node;

	if (!lst || !f)
		return ;
	current_node = lst;
	next_node = lst->next;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		f(current_node->content);
		current_node = next_node;
	}
}
// static void ft_print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }
// static void ft_del(void *content)
// {
// 	free(content);
// }
// int main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	node1 = (t_list *)malloc(sizeof(t_list));
// 	node2 = (t_list *)malloc(sizeof(t_list));
// 	node3 = (t_list *)malloc(sizeof(t_list));
// 	node1->content = ft_strdup("A");
// 	node2->content = ft_strdup("B");
// 	node3->content = ft_strdup("C");
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	printf("List:\n");
// 	ft_lstiter(node1, ft_print_content);
// 	ft_lstclear(&node1, ft_del);
// 	return (0);
// }