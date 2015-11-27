/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:15:27 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/11/27 17:12:14 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;

	i = 0;
	const (unsigned char*)s;
	while (s[i] != '\0')
	{
		while (s(i) != c)
		{
			i++;
			return (s(i));
		}
	}
}
