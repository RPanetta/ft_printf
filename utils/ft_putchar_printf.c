/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:10:28 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/31 12:10:28 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int	ft_putchar_printf(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}
// int	main(void)
// {
// 	char c;
// 	c = 'r';
// 	ft_putchar_printf(c);
// 	return (0);
// }