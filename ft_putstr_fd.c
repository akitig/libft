/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunimot <akunimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 08:37:44 by akunimot          #+#    #+#             */
/*   Updated: 2024/04/16 08:58:24 by akunimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t len;

	if (!s)
		return ;
	len = ft_strlen(s);
	while (len > 100)
	{
		write(fd, s, 100);
		s += 100;
		len -= 100;
	}
	write(fd, s, len);
}