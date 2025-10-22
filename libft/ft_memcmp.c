/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovikov <pnovikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 18:39:28 by pnovikov          #+#    #+#             */
/*   Updated: 2025/10/21 17:58:54 by pnovikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((((char *)s1)[i] == ((char *)s2)[i]) && (i < (n - 1)) && n)
		i++;
	return ((((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]) * !(!n));
}
