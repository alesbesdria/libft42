/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:26:58 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/11/27 19:28:36 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <libft.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/*
   size_t	ft_strlcat(char *dst, const char *src, size_t n)
   {
   strlcat(dst, src, n);
   }
   */
int		main(void)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *) malloc(sizeof(char) * 100);
	s = (char *) malloc(sizeof(char) * 100);

	strcpy(d, "je te ");
	strcpy(s, "meaow !!!!");
	i = 0;
	while (i < 20)
	{
		printf("Result %lu = %lu\n", i, strlcat(strdup(d), s, i));
		i++;
	}
	return (0);
}
