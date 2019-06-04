#include "incl.h"
#include "libft.h"

void	rest(char *ptr, char **memory_str)
{
	size_t i;

	i = 0;
	while (ptr[i])
	{
		*(memory_str[i]) = ptr[i];
		i++;
	}
}

char    *f_strchr(char const *src, char a, char **memory)
{
        size_t i;

        i = 0;
        while (src[i] != '\0')
        {
                if (src[i] == a)
		{
                        rest ((char *)src + i, **memory);
			break;
		}
                i++;
        }
        if (!a && src[i] == '\0')
		rest ((char *)src + i, **memory);
        return (NULL);
}


int	main()
{
	char str[] = "London is the capital";
	char *memory;
	memory = ft_strnew(100);
	f_strchr(str, 'i', &memory);
	printf("%s",memory);
	return (0);
}
