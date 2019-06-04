#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int	main()
{
	char s1[] = "Moscow";
	char s2[] = "city";
	ft_strrejoin(&s1, s2);
	printf("%s", s1);
	return (0);
}
