/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:11:33 by rpanetta          #+#    #+#             */
/*   Updated: 2025/11/04 12:58:34 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conversion(char format, va_list *args)
{
	int	count;

	count = 0;
	if (format == 'c')
		count = ft_putchar_printf(va_arg(*args, int));
	else if (format == 's')
		count = ft_putstr_printf(va_arg(*args, char *));
	else if (format == 'p')
		count = ft_print_ptr(va_arg(*args, unsigned long));
	else if (format == 'd' || format == 'i')
		count = ft_putnbr_printf(va_arg(*args, int));
	else if (format == 'u')
		count = ft_print_unsigned(va_arg(*args, unsigned int));
	else if (format == 'x' || format == 'X')
		count = ft_print_hex(va_arg(*args, unsigned int), format);
	else if (format == '%')
		count = ft_putchar_printf('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!format)
		return (0);
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
			count = count + ft_putchar_printf(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

// int main(void)
// {
// 	char	c = 'R';
// 	int		len1;
// 	len1 = ft_printf("Mi nombre empieza con la letra: %c\n", c);
// 	ft_printf("Len es: %i\n", len1);
// 	// TEST2
// 	char	str[] = "Rocio";
// 	int		len2;
// 	len2 = ft_printf("My name is: %s\n", str);
// 	ft_printf("Len es: %i\n", len2);
// 	// TEST3
// 	int	len3;
// 	int	x = 26;
// 	int	*ptr = &x;
// 	int	*null_ptr = NULL;
// 	len3 = ft_printf("%p\n", ptr);
// 	ft_printf("Len es: %i\n", len3);
// 	len3 = ft_printf("%p\n", null_ptr);
// 	ft_printf("Len es: %i\n", len3);
// 	// TEST4
// 	int	age = 28;
// 	int	len4;
// 	len4 = ft_printf("I'm %i years old\n", age);
// 	ft_printf("Len es: %i\n", len4);
// 	// TEST5
// 	int nbr = 42;
// 	int	zero = 0;
// 	int len5;
// 	len5 = ft_print_unsigned(nbr);
// 	ft_putchar_printf('\n');
// 	ft_printf("Print len: %u\n", len5);
// 	len5 = ft_print_unsigned(423);
// 	ft_printf("\nPrint len: %u\n", len5);
// 	len5 = ft_print_unsigned(zero);
// 	ft_printf("\nPrint len: %u\n", len5);
// 	// TEST6
// 	int nmr = 255;
// 	int nmr2 = 2587856;
// 	int len6;
// 	len6 = ft_printf("Hexadecimal is: %x\n", nmr);
// 	len6 = ft_printf("Hexadecimal is: %x\n", nmr2);
// 	len6 = ft_printf("Hexadecimal is: %X\n", nmr);
// 	ft_printf("Len es: %i\n", len6);
// 	//TEST7
// 	char	sing = '%';
// 	int	len7;
// 	len7 = ft_printf("Sign is: %%\n", sing);
// 	ft_printf("Len es: %i\n", len7);
// 	return (0);
// }
