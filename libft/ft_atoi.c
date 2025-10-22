/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovikov <pnovikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:08:00 by pnovikov          #+#    #+#             */
/*   Updated: 2025/10/21 16:17:09 by pnovikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//check if char is allowed to be in atoi for some stupid reason
//i hate it (._.)
int	is_allowed(char c)
{
	if (c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == '\f')
		return (1);
	if (c == ' ' || c == '+' || c == '-')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	long int		ret;
	size_t			i;
	int				min;

	i = 0;
	ret = 0;
	min = 1;
	while (is_allowed(nptr[i]))
	{
		if (nptr[i] == '-' || (nptr[i] == '+'))
		{
			min = !(nptr[i] == '-') * 2 - 1;
			i++;
			break ;
		}
		i++;
	}
	while (nptr[i] && ((nptr[i] >= '0') && (nptr[i] <= '9')))
	{
		ret = (ret * 10) + (nptr[i] - 48);
		i++;
	}
	return ((int)(ret * min));
}
