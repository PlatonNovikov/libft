/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovikov <pnovikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 16:47:20 by pnovikov          #+#    #+#             */
/*   Updated: 2025/10/21 17:51:15 by pnovikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const int	len = ft_strlen(s);
	size_t		i;

	i = 0;
	while (len + 1 - i)
	{
		if ((unsigned char)s[len - i] == (unsigned char)c)
			return ((char *)&s[len - i]);
		i++;
	}
	return (NULL);
}
