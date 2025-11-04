/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:50:03 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/31 14:50:03 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int	ft_putnbr_printf(int n)
{
	char	*str;
	int		len;

	ft_putnbr_fd(n, 1);
	str = ft_itoa(n);
	len = ft_strlen(str);
	free(str);
	return (len);
}
