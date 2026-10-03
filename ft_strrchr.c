
#include <string.h>

static int ft_strlen(char *s)
{
    int	i;

    i = 0;
    while (s[i])
      i++;
    return (i);
}

char	*ft_strrchr(const char *s, int c)
{
    int	i;

    i = ft_strlen((char *)s);
    while (i >= 0 && s[i] != c)
      i--;
    if (s[i] == c)
      return (&((char *)s)[i]);
    return (NULL);
}
