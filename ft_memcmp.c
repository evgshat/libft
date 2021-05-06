#include "libft.h"

int	ft_memcmp (const void *s1, const void *s2, size_t n)
{
	unsigned char	*new_s1;
	unsigned char	*new_s2;
	size_t			i;

	i = 0;
	new_s1 = (unsigned char *)s1;
	new_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (new_s1[i] > new_s2[i])
			return (new_s1[i] - new_s2[i]);
		if (new_s1[i] < new_s2[i])
			return (new_s1[i] - new_s2[i]);
		i++;
	}
	return (0);
}
