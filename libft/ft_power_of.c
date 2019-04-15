
#include "libft.h"

int ft_power_of(int n, int expo)
{
	int i;
	int power;
	
	i = 1;
	power = n;
	if (expo <= 0)
	{
		return (1);
	}
	else if (expo == 1)
	{
		return n;
	}
	while(i < expo)
	{
		power = power * n;
		i++;
	}
	return (power);
}


//old for the hex, save it for
// int ft_power_of(int n, int expo)
// {
// 	int i;
// 	int power;
	
// 	i = 1;
// 	power = 1;
// 	while(i < n)
// 	{
// 		power = power * expo;
// 		i++;
// 	}
// 	return (power);
// }