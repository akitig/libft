/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkunimot <hatopopo142@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 05:27:22 by akunimot          #+#    #+#             */
/*   Updated: 2024/04/23 12:56:02 by mkunimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (!d && !s)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

/*
#include <stdio.h>

void	check_memcpy(void *dst, void *src, size_t size)
{
	void	*expected;

	expected = malloc(size);
	memcpy(expected, src, size);
	ft_memcpy(dst, src, size);
	printf("dst:%s, src:%s, size:%zu\n", dst, src, size);
	// ASSERT_EQ_MEM(dst, expected, size);
	if (expected)
		free(expected);
}

*/