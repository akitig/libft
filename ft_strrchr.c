/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunimot <akunimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 05:55:16 by akunimot          #+#    #+#             */
/*   Updated: 2024/04/16 09:17:00 by akunimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *ans;
	size_t i;

	ans = NULL;
	i = 0;
	while (1)
	{
		if (s[i] == (char)c)
			ans = (char *)(s + i);
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (ans);
}