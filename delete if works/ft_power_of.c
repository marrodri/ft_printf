
#include "libft.h"

int ft_power_of(int n, int expo)
{
	int i;
	int power;
	i = 1;
	power = 1;
	while(i < n)
	{
		power = power * expo;
		i++;
	}
	return power;
}