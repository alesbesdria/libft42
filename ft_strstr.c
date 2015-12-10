/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 13:53:41 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/09 13:53:45 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s2)
		return (char*)(s1);
	if (*s2 == '\0')
		return (char*)(s1);
	while (s1[i] != '\0')
	{
		while (s2[j] && s1[i] == s2[j])
		{
			j++;
			i++;
		}
			if (s2[j] == '\0') {

				return (char*)&(s1[i - ft_strlen(s2)]);
			}
		j = 0;
		i++;
	}
	return (NULL);
}
