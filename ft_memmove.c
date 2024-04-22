/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunimot <akunimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 05:27:18 by akunimot          #+#    #+#             */
/*   Updated: 2024/04/17 21:37:00 by akunimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*ans;

	if (n == 0 || dest == src)
		return (dest);
	ans = dest;
	if (src < dest)
	{
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (ans);
}

#include <stdio.h>

void	check_memmove(void *dst, void *src, size_t size)
{
	void	*expected;

	expected = malloc(size);
	memmove(expected, src, size);
	ft_memmove(dst, src, size);
	printf("dst:%s, src:%s, size:%zu\n", dst, src, size);
	// ASSERT_EQ_MEM(dst, expected, size);
	if (expected)
		free(expected);
}

int	main(void)
{
	char	*src;
	char	*dst;

	src = malloc(100);
	for (int i = 0; i < 100; i++)
		src[i] = i;
	dst = malloc(100);
	/* 1 */ check_memmove(dst, src, 0);
	/* 2 */ check_memmove(dst, src, 10);
	/* 2 */ check_memmove(dst, src, 100);
	/* 3 forward overlap */ check_memmove(dst + 42, dst, 50);
	/* 4 backward overlap*/ check_memmove(dst, dst + 21, 50);
	return (0);
}
