/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:33:33 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/26 17:33:33 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Description: Counts the number of nodes in the list
int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
// int main(void)
// {
// 	int	size;
// 	t_list	*node1 = ft_lstnew("one, ");
// 	t_list	*node2 = ft_lstnew("two, ");
// 	t_list	*node3 = ft_lstnew("three, ");
// 	t_list	*node4 = ft_lstnew("four, ");
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	size = ft_lstsize(node1);
// 	printf("Number of nodes in the list: %i\n", size);
// 	return (0);
// }