/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunimot <akitig24@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:40:35 by akunimot          #+#    #+#             */
/*   Updated: 2024/04/23 13:48:17 by akunimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t len)
{
	size_t			i;
	unsigned char	*ans;

	i = 0;
	ans = (unsigned char *)buf;
	while (i < len)
	{
		ans[i] = ch;
		i++;
	}
	return (ans);
}
