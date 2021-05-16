#include "libft.h"

void	*ft_memset (void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_s;
	char			s;

	i = 0;
	s = 0;
	new_s = (unsigned char *)b;
	s = (unsigned char)c;
	while (i < n)
	{
		new_s[i] = c;
		i++;
	}
	return (new_s);
}
