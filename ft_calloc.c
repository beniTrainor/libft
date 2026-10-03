#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
    char    *arr;
    size_t  i;
    size_t  arrsize;

    if (size > 0 && nmemb > SIZE_MAX / size)
	return (NULL);
    arrsize = nmemb * size;
    if (arrsize == 0)
	return (malloc(0));
    arr = malloc(arrsize);
    if (arr == NULL)
      return (NULL);
    i = 0;
    while (i < arrsize)
    {
	arr[i] = '\0';
	i++;
    }
    return ((void *)arr);
}
