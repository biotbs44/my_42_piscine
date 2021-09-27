#include <stdio.h>

int	ft_recur(void)
{
	static int	count = 0;

	count++;
	printf("count : %d\n", count);
	if (count == 9)
		return (count);
	else
		ft_recur();
}

int	main(void)
{
	int	ret;

	ret = ft_recur();
	printf("res : %d\n", ret);
}
