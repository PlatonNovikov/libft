/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovikov <pnovikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:13:38 by pnovikov          #+#    #+#             */
/*   Updated: 2025/10/22 16:52:41 by pnovikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	split_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		while ((s[i + 1] == c) && s[i + 1])
			i++;
		i++;
	}
	return (count);
}

static char	**main_loop(char const *s, char c, char **ret)
{
	size_t	i;
	size_t	j;
	size_t	p0;

	i = 0;
	j = 0;
	p0 = (size_t)s;
	while (s[i])
	{
		if (s[i] == c)
		{
			ret[j] = ft_substr(s, p0 - (size_t)s, (size_t)(&s[i]) - p0);
			if (!ret[j])
				return (0);
			while (s[i + 1] == c)
				i++;
			p0 = (size_t)(&s[i]) + 1;
			j++;
		}
		i++;
	}
	ret[j] = ft_substr(s, p0 - (size_t)s, (size_t)(&s[i]) - p0);
	if (!ret[j])
		return (0);
	ret[j + 1] = NULL;
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char			**ret;
	size_t			i;
	const size_t	len = split_count(s, c) + 2;

	if (!c)
		return (NULL);
	ret = (char **)ft_calloc(len, sizeof(char *));
	if (!ret)
		return (NULL);
	i = 0;
	while (s[i] == c)
		i++;
	if (!main_loop(s + i, c, ret))
	{
		i = 0;
		while (i < len + 2)
		{
			free(ret[i]);
			i++;
		}
		free(ret);
		return (NULL);
	}
	return (ret);
}
