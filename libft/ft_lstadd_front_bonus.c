/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:11:25 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/26 17:11:25 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Description: Adds the node ’new’ at the beginning of the list.
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
// 	// Test 1
// 	t_list	*pointer_first;
// 	t_list	lst_first;
// 	t_list	lst_second;
// 	t_list	new;
// 	char	*a = "a";
// 	char	*b = "b";
// 	char	*x = "x";
// 	(&lst_first)->content = a;
// 	(&lst_first)->next = &lst_second;
// 	(&lst_second)->content = b;
// 	(&lst_second)->next = NULL;
// 	(&new)->content = x;
// 	(&new)->next = NULL;
// 	pointer_first = &lst_first;
// 	printf("The list contents before adding new:\n");
// 	printf("%s, ", (char *)(pointer_first->content));
// 	printf("%s\n", (char *)(pointer_first->next->content));
// 	ft_lstadd_front(&pointer_first, &new);
// 	printf("The list contents after adding new:\n");
// 	printf("%s, ", (char *)(pointer_first->content));
// 	printf("%s, ", (char *)(pointer_first->next->content));
// 	printf("%s\n", (char *)(pointer_first->next->next->content));
// 	// Test 2
// 	char	*content = "Element content 1";
// 	char	*content_new2 = "Element content new";
// 	t_list	*lst;
// 	t_list	new2;
// 	(&new2)->content = content_new2;
// 	(&new2)->next = NULL;
// 	lst = ft_lstnew(content);
// 	printf("The list contents before adding new:\n");
// 	printf("%s\n", (char *)(lst->content));
// 	ft_lstadd_front(&lst, &new2);
// 	printf("The list contents after adding new:\n");
// 	printf("%s, ", (char *)(lst->content));
// 	printf("%s\n", (char *)(lst->next->content));
// 	return (0);
// }