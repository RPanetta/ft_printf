/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpanetta <rpanetta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:30:49 by rpanetta          #+#    #+#             */
/*   Updated: 2025/10/26 16:15:29 by rpanetta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Description: Applies the function ’f’ to each character of the string
//  passed as argument, passing its index as the first argument.
// Each character is passed by address to ’f’ so it can be
// modified if necessary.
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// void	ft_add_index(unsigned int i, char *c)
// {
// 	*c = *c + i;
// }
// int main(void)
// {
// 	char str[] = "aaaaaaaa";
// 	ft_striteri(str, &ft_add_index);
// 	printf("%s\n", str);
// 	return (0);
// }