#include "ft_printf.h"

#include <stdio.h>
int ft_int_to_oct(int n)
{
	int oct;
	int dec;
	int i;
	int tmp;
	int size;

	size = 0;
	oct = 0;
	dec = 0;
	tmp = 0;
	i = n;
	while(i > 0)
	{
		i = i / 10;
		size++;
	}
	size++;
	i = 0;
	while (i < size)
	{
		dec = n / 8;
		tmp = n % 8;
		oct = oct + (tmp * (ft_power_of(10,i)));
		i++;
		n = dec;
	}
	// oct = n % 8;

	// printf("size %d, oct %d\n", oct);
	return oct;
}

int main()
{
	//int expo = ft_power_of(10,3);
	//printf("expo is %d\n", expo);
	int a = ft_int_to_oct(932131123);
	printf("oct %o\n", 932131123);
	printf("num in oct is %d\n", a);
	return 0;
}