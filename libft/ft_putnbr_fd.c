/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovikov <pnovikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:08:40 by pnovikov          #+#    #+#             */
/*   Updated: 2025/10/22 15:24:24 by pnovikov         ###   ########.fr       */
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

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;
	char			tmp;
	unsigned int	un;
	unsigned int	numlen;

	if (!n)
	{
		write(fd, "0", 1);
		return ;
	}
	un = (unsigned int)((n + (n < 0)) * ((n > 0) * 2 - 1) + (n < 0));
	numlen = ft_log10(un);
	if (!n)
		write(fd, "-", 1);
	i = 0;
	while (i < numlen)
	{
		tmp = un % 10 + 48;
		write(fd, &tmp, 1);
		un = un / 10;
		i++;
	}
}
