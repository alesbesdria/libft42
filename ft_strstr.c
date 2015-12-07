/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:29:42 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/07 14:20:08 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s2[i] == '\0')
		return (char*)(s1);
	while (s1[i] != '\0')
	{
		while (s1[i] == s2[j])
		{
			j++;
			i++;
			if (s2[j] == '\0')
				return (char*)&(s1[i - ft_strlen(s2)]);
		}
		j = 0;
		i++;
	}
	return (0);
}
