/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:29:59 by rpanetta          #+#    #+#             */
/*   Updated: 2025/11/02 18:22:01 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_print_unsigned(unsigned int n)
{
	int		len;
	int		nmbr;
	char	digit;

	len = 0;
	nmbr = n;
	while (nmbr != 0)
	{
		if (nmbr >= 10)
		{
			nmbr = nmbr / 10;
			digit = (nmbr % 10) + '0';
			write (1, &digit, 1);
		}
		else
		{
			nmbr = nmbr % 10;
		}
		len++;
	}
	ft_putchar_fd((nmbr + '0'), 1);
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