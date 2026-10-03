static size_t	min(size_t a, size_t b)
{
    if (a < b)
	return (a);
    else
	return (b);
}

static size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  destlen;

    i = 0;
    while (i < size && dst[i] != '\0')
      i++;
    destlen = i;
    if (destlen == size)
	return (size + ft_strlen(src));
    j = 0;
    while ((i < size) && src[j] != '\0')
    {
	dst[i] = src[j];
	i++;
	j++;
    }
    dst[i] = '\0';
    return (destlen + ft_strlen(src));
}
