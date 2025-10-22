/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovikov <pnovikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 18:28:41 by pnovikov          #+#    #+#             */
/*   Updated: 2025/10/21 18:08:50 by pnovikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n - i)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)&((unsigned char *)s)[i]);
		i++;
	}
	return (NULL);
}
