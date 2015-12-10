
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	sub = (ft_strnew(len + 1));
	if (!s || !sub)
		return NULL;
	while (i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	return (sub);
}
