#include "incl.h"

int	main()
{
	struct	test_list
	{
		int x;
		int y;
	}	list;

	list.x = 1;
	list.y = 2;
	printf("%d %d", list.x, list.y);
	return(0);
}
