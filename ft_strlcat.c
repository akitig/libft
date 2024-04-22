#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t dstlen;
	size_t srclen;

	i = 0;
	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	j = ft_strlen(dst);
	dstlen = j;
	srclen = ft_strlen(src);
	if (dstsize > 0 && dstlen < dstsize - 1)
	{
		while (src[i] != '\0' && j < dstsize - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	if (dstlen >= dstsize)
		dstlen = dstsize;
	return (dstlen + srclen);
}