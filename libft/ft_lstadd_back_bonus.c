/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:37:07 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/26 17:37:07 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Description: Adds the node ’new’ at the end of the list.
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
// int main(void)
// {
// 	t_list	*node1 = ft_lstnew("A");
// 	t_list	*node2 = ft_lstnew("B");
// 	t_list	*node3 = ft_lstnew("C");
// 	t_list	*new = ft_lstnew("D");
// 	t_list	*lst_ptr;
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	lst_ptr = node1;
// 	printf("The list contents before adding new:\n");
// 	printf("%s, ", (char *)(node1->content));
// 	printf("%s, ", (char *)(node1->next->content));
// 	printf("%s\n", (char *)(node1->next->next->content));
// 	ft_lstadd_back(&lst_ptr, new);
// 	printf("The list contents after adding new:\n");
// 	printf("%s, ", (char *)(lst_ptr->content));
// 	printf("%s, ", (char *)(lst_ptr->next->content));
// 	printf("%s, ", (char *)(lst_ptr->next->next->content));
// 	printf("%s\n", (char *)(lst_ptr->next->next->next->content));
// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	free(new);
// 	return(0);
// }