
#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t	count;

	count = 0;

	if (!s1 && !s2)
		return (1);

	if (!s1 || !s2)
		return (0);

	while (s1[count] && s2[count] && s1[count] == s2[count])
	{
		count++;
	}

	if (s1[count] == s2[count])
		return (1);
	return (0);
}
