/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlouise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:42:48 by dlouise           #+#    #+#             */
/*   Updated: 2015/12/09 13:55:03 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countstr(char *s, char c)
{
	char	in_substr;
	size_t	nb_substr;
	size_t	i;

	nb_substr = 0;
	in_substr = 0;
	i = 0;
	while ('\0' != s[i])
	{
		if (s[i] == c)
		{
			in_substr = 0;
		}
		else if (s[i] != c && 0 == in_substr)
		{
			nb_substr++;
			in_substr = 1;
		}
		i++;
	}
	return (nb_substr);
}

static char		*ft_nextstr(char **p, char c)
{
	char	*end;
	char	*result;
	size_t	len;

	while (**p == c)
		(*p)++;
	end = ft_strchr(*p, c);
	if (NULL == end)
		len = ft_strlen(*p);
	else
		len = end - *p;
	result = ft_strsub(*p, 0, len);
	*p += len;
	return (result);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	nb_str;
	size_t	index;
	char	**result;
	char	*p;

	if (NULL == s || 0 == c)
		return (NULL);
	p = (char*)s;
	nb_str = ft_countstr(p, c);
	result = (char**)malloc(sizeof(char*) * (nb_str + 1));
	if (NULL == result)
		return (NULL);
	index = 0;
	while (index < nb_str)
	{
		result[index] = ft_nextstr(&p, c);
		index++;
	}
	result[index] = NULL;
	return (result);
}
