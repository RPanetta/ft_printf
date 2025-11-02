/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:36:07 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/26 17:36:07 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Description: Returns the last node of the list.
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
// int main(void)
// {
// 	t_list	*last;
// 	char	*str;
// 	t_list *node1 = ft_lstnew("one, ");
// 	t_list *node2 = ft_lstnew("two, ");
// 	t_list *node3 = ft_lstnew("three");
// 	node1->next = node2;
// 	node2->next = node3;
// 	last = ft_lstlast(node1);
// 	str = (char *)last->content;
// 	printf("The last node of the list is: %s\n", str);
// 	return (0);
// }