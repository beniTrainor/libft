#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

static int  is_in_set(const char c, char const *set)
{
    while (*set != '\0')
    {
	if (*set == c)
	  return (1);
	set++;
    }
    return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
    char    *res;
    size_t    start;
    size_t    end;
    size_t    i;
    size_t  len;

    len = ft_strlen(s1);
    i = 0;
    while (i < len && is_in_set(s1[i], set))
      i++;
    start = i;
    if (start == len)
    {
      res = malloc(1);
      if (res == NULL)
	    return (NULL);
      res[0] = '\0';
      return (res);
    }
    i = len - 1;
    while (i > 0 && is_in_set(s1[i], set))
      i--;
    end = i;
    res = malloc(sizeof(char) * (len - start - (len - end - 1) + 1));
    if (res == NULL)
	return (NULL);
    i = start;
    while (i <= end)
    {
      res[i - start] = s1[i];
      i++;
    }
    res[i - start] = '\0';
    return (res);
}
