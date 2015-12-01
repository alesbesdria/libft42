/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:22:01 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/01 17:50:23 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*s2;

	i = 0;
	j = 0;
	s2 = malloc(sizeof(*s2)*(1 + ft_strlen(src));
	if (s2 == NULL)
		return (0);
	while (s1[i] = s2[j])
	{
		i++;
		j++;
	}
	s2[j] = '\0';
	return (s2);
}
