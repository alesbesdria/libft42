/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlouise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:28:15 by dlouise           #+#    #+#             */
/*   Updated: 2015/11/28 14:21:00 by dlouise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lennum(int n)
{
	size_t	length;

	if (0 == n)
	{
		return (1);
	}
	length = 0;
	if (0 > n)
	{
		length = 1;
	}
	while (0 != n)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char			*ft_itoa(int n)
{
	size_t	length;
	char	*result;

	length = ft_lennum(n);
	result = (char*)malloc(sizeof(char) * (length + 1));
	if (NULL == result)
		return (NULL);
	result[length] = 0;
	if ((-2147483647 - 1) == n)
		return (ft_strcpy(result, "-2147483648"));
	if (0 > n)
	{
		result[0] = '-';
		n = -n;
	}
	if (0 == n)
		result[0] = '0';
	while (0 != n)
	{
		length--;
		result[length] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}
