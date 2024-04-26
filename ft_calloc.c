/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunimot <akitig24@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 06:27:35 by akunimot          #+#    #+#             */
/*   Updated: 2024/04/23 13:45:21 by akunimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (count == 0 || size == 0)
		return (ft_calloc(1, 1));
	mem = malloc(count * size);
	if (mem == NULL)
	{
		return (NULL);
	}
	ft_bzero(mem, count * size);
	return (mem);
}
