/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovikov <pnovikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:25:17 by pnovikov          #+#    #+#             */
/*   Updated: 2025/10/22 16:24:49 by pnovikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	ret = (char *)ft_calloc(len + 1, sizeof(char));
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, &s[start], len + 1);
	return (ret);
}
