/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:36:34 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/31 14:36:34 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int	ft_putstr_printf(char *s)
{
	if (!s)
	{
		s = "(null)";
	}
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}

// int main(void)
// {
// 	char	str[] = "how are you?";
// 	ft_putstr_printf(str);
// 	return (0);
// }