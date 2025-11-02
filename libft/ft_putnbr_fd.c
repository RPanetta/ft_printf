/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:35:15 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/22 11:54:08 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Description: Outputs the integer ’n’ to the specified file descriptor.
void	ft_putnbr_fd(int n, int fd)
{
	char	digit;

	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -n;
	}
	if (n == 0)
		write (fd, "0", 1);
	if (n > 0 && n < 10)
	{
		digit = n + '0';
		write (fd, &digit, 1);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		digit = (n % 10) + '0';
		write (fd, &digit, 1);
	}
}

// int main(void)
// {
// 	int	nmb = 6;
// 	ft_putnbr_fd(nmb, 1);
// 	return (0);
// }