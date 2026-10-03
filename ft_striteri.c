
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int    i;

    i = 0;
    while (*s != '\0')
    {
      f((unsigned int)i, s);
      s++;
      i++;
    }
}
