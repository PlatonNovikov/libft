/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovikov <pnovikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:40:51 by pnovikov          #+#    #+#             */
/*   Updated: 2025/10/21 18:12:06 by pnovikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*tmp;

	i = 0;
	j = 0;
	tmp = (char *)big;
	while (i <= len)
	{
		if (!little[j])
			return (tmp);
		if (big[i] == little[j])
		{
			if (!j)
				tmp = &((char *)big)[i];
			j++;
		}
		else
			j = 0;
		i++;
	}
	return (NULL);
}
