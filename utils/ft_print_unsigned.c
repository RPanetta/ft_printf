/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:29:59 by rpanetta          #+#    #+#             */
/*   Updated: 2025/11/04 11:32:41 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int	ft_print_unsigned(unsigned int n)
{
	int		len;

	len = 0;
	if (n >= 10)
	{
		len = len + ft_print_unsigned(n / 10);
	}
	ft_putchar_printf((n % 10) + '0');
	len++;
	return (len);
}
// int main(void)
// {
// 	int result;
// 	int	zero;
// 	result = ft_print_unsigned(42);
// 	ft_putchar_fd('\n', 1);
// 	printf("Print len: %u\n", result);
// 	result = ft_print_unsigned(423);
// 	printf("\nPrint len: %u\n", result);
// 	zero = ft_print_unsigned(0);
// 	printf("\nPrint len: %u\n", zero);
// 	return (0);
// }