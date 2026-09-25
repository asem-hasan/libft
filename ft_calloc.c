#include <stddef.h>
#include <stdlib.h>
#include "libft.h"
#include <stdint.h>

void    *ft_calloc(size_t nmemb, size_t size)
{
        void    *p;
        size_t  result;

        if (nmemb == 0 || size == 0)
	{
		p = malloc(0);
		return (p);
	}
        if (nmemb > SIZE_MAX / size)
                return (NULL);
        result = nmemb * size;
        p = malloc(result);
        if (!p)
                return (NULL);
        ft_bzero(p, result);
        return (p);
}
