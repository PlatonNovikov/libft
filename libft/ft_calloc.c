/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovikov <pnovikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:02:31 by pnovikov          #+#    #+#             */
/*   Updated: 2025/10/21 21:08:34 by pnovikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	ret = malloc(!(nmemb * size) + (nmemb * size));
	if (ret)
		ft_bzero(ret, !(nmemb * size) + (nmemb * (size / sizeof(char))));
	return (ret);
}
