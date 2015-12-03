
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;

	if ((mem = (char*)malloc(size * sizeof(mem))))
	{
		ft_memset(mem, 0 , size);
		return (mem);
	}
	return (NULL);
}
