/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeirsma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 03:27:47 by mmeirsma          #+#    #+#             */
/*   Updated: 2015/12/01 16:06:21 by mmeirsma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void		*ft_memset(void *b, int c, size_t len);
size_t		ft_strlen(const char *s);
void		ft_bzero(void *s, size_t n);

#endif
