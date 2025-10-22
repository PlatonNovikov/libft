/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovikov <pnovikov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:23:15 by pnovikov          #+#    #+#             */
/*   Updated: 2025/10/22 16:15:04 by pnovikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	trimlen(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s1) - 1;
	while (len && in(s1[len], set))
		len--;
	i = 0;
	while (len && in(s1[i], set))
	{
		i++;
		len--;
	}
	return (len + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const size_t	len = trimlen(s1, set);
	size_t			i;
	size_t			j;
	char			*ret;

	ret = (char *)ft_calloc(len + 1, sizeof(char));
	if (ret == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while ((i < ft_strlen(s1)) && in(s1[i], set))
		i++;
	while (j < len)
	{
		ret[j] = s1[i];
		i++;
		j++;
	}
	return (ret);
}

// int main()
// {
// 	char	str[] = "lorem \n ipsum \t dolor \n sit \t amet";
// 	printf("%s", ft_strtrim(str, "0"));
// }
