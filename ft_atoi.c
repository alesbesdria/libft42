
#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int result;
	int op;

	i = 0;
	result = 0;
	op = 1;

	while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;

	if (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			op = -1;
		i++;
	}

	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * op);
}
