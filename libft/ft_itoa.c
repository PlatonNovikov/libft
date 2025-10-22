/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovikov <pnovikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:28:17 by pnovikov          #+#    #+#             */
/*   Updated: 2025/10/21 18:10:41 by pnovikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_log10(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i - 1);
}

char	*ft_itoa(int n)
{
	char			*ret;
	int				i;
	unsigned int	numlen;
	unsigned int	un;

	un = (unsigned int)((n + (n < 0)) * ((n > 0) * 2 - 1) + (n < 0));
	numlen = ft_log10(un);
	ret = (char *)ft_calloc((numlen + (n <= 0) + 1), sizeof(char));
	if (!ret)
		return (NULL);
	ret[0] = '0';
	if (!n)
		return (ret);
	ret[0] = '-' * (n < 0);
	i = 0;
	while ((unsigned int)i < numlen)
	{
		ret[numlen + (n < 0) - i - 1] = un % 10 + 48;
		un = un / 10;
		i++;
	}
	return (ret);
}
