/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:11:01 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/31 14:49:03 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_print_ptr_hex(unsigned long n)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (n >= 16)
	{
		len += ft_print_ptr_hex(n / 16);
	}
	len += ft_putchar_fd(base[n % 16]);
	return (len);
		
}
int	ft_print_ptr(unsigned long ptr)
{
	int	len;

	len = 0;
	if (ptr == NULL)
	{
		return (ft_putstr_fd("(nil)"));
	}
	len += ft_putstr_fd("0x");
	len += ft_print_ptr_hex(ptr);
	return (len);
}
// int main(void)
// {
// 	int	x = 5;
// 	int	*ptr = &x;
// 	int	*null_ptr = NULL;
// 	printf("%p\n", ptr);
// 	printf("%p\n", null_ptr);
// 	return (0);
// }