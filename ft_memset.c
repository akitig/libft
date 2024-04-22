#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t len)
{
	size_t i;
	unsigned char *ans;

	i = 0;
	ans = (unsigned char *)buf;
	while (i < len)
	{
		ans[i] = ch;
		i++;
	}
	return (ans);
}