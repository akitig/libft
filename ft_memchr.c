/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunimot <akunimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 06:12:10 by akunimot          #+#    #+#             */
/*   Updated: 2024/04/16 08:51:14 by akunimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *s_cp;

	s_cp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_cp[i] == (unsigned char)c)
			return ((void *)(s_cp + i));
		i++;
	}
	return (NULL);
}