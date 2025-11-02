/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:11:33 by rpanetta          #+#    #+#             */
/*   Updated: 2025/11/02 22:03:38 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_conversion(char format, va_list *args)
{
	int	count;

	count = 0;
	if (format == 'c')
		count = ft_putchar_printf(va_arg(*args, int));
	else if (format == 's')
		count = ft_putstr_printf(va_arg(*args, char *));
	// else if (format == 'p')
	// 	count = ft_print_ptr_fd(va_arg(*args, unsigned long));
	else if(format == 'd' || format == 'i')
		count = ft_putnbr_printf(va_arg(*args, int));
	// else if (format == 'u')
	// 	count = ft_
	// else if (format == 'x' || format == 'X')
	// 	count = 
	else if (format == '%')
		count = ft_putchar_printf('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int 	count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (count);
		else if (format[i] == '%' && format[i + 1] != '\0')
		{
			count = count + ft_conversion(format[i + 1], &args);
			i++;
		}
		else
		{
			count = count + ft_putchar_printf(format[i]);
		}
		i++;
	}
	va_end(args);
	return(count);
}
int main(void)
{
	char	c = 'R';
	int		len1;
	len1 = ft_printf("Mi nombre empieza con la letra: %c\n", c);
	ft_printf("Len es: %i\n", len1);
	// TEST2
	char	str[] = "Rocio";
	int		len2;
	len2 = ft_printf("My name is: %s\n", str);
	ft_printf("Len es: %i\n", len2);
	// TEST3
	int	age = 28;
	int	len3;
	len3 = ft_printf("I'm %i years old\n", age);
	ft_printf("Len es: %i\n", len3);
	// TEST4
	return (0);
}
