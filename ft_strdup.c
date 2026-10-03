#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

static void	ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 1;
	while (src[i - 1] != '\0')
	{
	    dst[i - 1] = src[i - 1];
	    i++;
	}
	dst[i - 1] = '\0';
}

char	*ft_strdup(const char *s)
{
    size_t  len;
    char    *dup;

    len = ft_strlen(s);
    dup = malloc(sizeof(char) * (len + 1));
    if (dup == NULL)
	return (NULL);
    ft_strcpy(dup, s);
    
    return (dup);
}
