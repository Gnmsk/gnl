#include "incl.h"
#include "libft.h"

void	rest(char *ptr, char **memory_str)
{
	while (*ptr)
	{
		(char *)memory_str = (char *)ptr;
		ptr++;
		memory_str++;
	}
}

char    *f_strchr(char const *src, char a, char **memory)
{
        size_t i;

        i = 0;
        while (src[i] != '\0')
        {
                if (src[i] == a)
                        rest ((char *)src + i, &(*memory));
                i++;
        }
        if (!a && src[i] == '\0')
		rest ((char *)src + i, &(*memory));
        return (NULL);
}


int	main()
{
	char str[] = "London is the capital of Great Britan";
	char *memory;
	memory = ft_strnew(100);
	f_strchr(str, 'i', &memory);
	printf("%s",memory);
	return (0);
}
