/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:33:23 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/24 14:46:19 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Description: Outputs the string ’s’
// to the specified file descriptor.
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		return ;
	}
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
}

// int main(void)
// {
// 	char	str[] = "how are you?";
// 	ft_putstr_fd(str, 1);
// 	return (0);
// }