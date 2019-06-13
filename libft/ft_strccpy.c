#include "libft.h"

char    *ft_strccpy(char *dest, char const *src, char c)
{
        int i;

        i = 0;
        while (src[i] && src[i] != c)
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';
        return (dest);
}
