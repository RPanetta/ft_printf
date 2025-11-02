/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:27:48 by rpanetta          #+#    #+#             */
/*   Updated: 2025/11/02 18:42:05 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>

//ft_printf
int		ft_printf(const char *format, ...);
int     ft_putchar_printf(char c);
int		ft_putstr_printf(char *s);
int		ft_print_ptr(unsigned long ptr);
int		ft_putnbr_printf(int n);
int		ft_print_unsigned(unsigned int n);
//functions
#endif 