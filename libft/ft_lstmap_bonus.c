/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:43:38 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/26 17:43:38 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description: Iterates through the list ’lst’, applies the
// function ’f’ to each node’s content, and creates
// a new list resulting of the successive applications
// of the function ’f’. The ’del’ function is used to
// delete the content of a node if needed.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current_node;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	current_node = lst;
	while (current_node != NULL)
	{
		new_content = f(current_node->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		current_node = current_node->next;
	}
	return (new_list);
}
// static void *ft_duplicate(void *content)
// {
// 	(void)content;
// 	char	*str;
// 	str = (char *)malloc(2);
// 	if (str)
// 		ft_strlcpy(str, "C", 2);
// 	return (str);
// }
// static void	ft_del(void *content)
// {
// 	free(content);
// }
// static void ft_print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }
// int main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*new;
// 	node1 = (t_list *)malloc(sizeof(t_list));
// 	node2 = (t_list *)malloc(sizeof(t_list));
// 	node1->content = ft_strdup("A");
// 	node2->content = ft_strdup("B");
// 	node1->next = node2;
// 	node2->next = NULL;
// 	ft_lstiter(node1, ft_print_content);
// 	new = ft_lstmap(node1, ft_duplicate, ft_del);
// 	ft_lstiter(new, ft_print_content);
// 	ft_lstclear(&new, ft_del);
// 	free(node1);
// 	free(node2);
// 	return (0);
// }