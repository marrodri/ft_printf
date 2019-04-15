#include "ft_printf.h"

#include <stdio.h>
long int ft_dec_to_oct(int n)
{
	long int oct;
	int dec;
	int i;
	int tmp;

	n = (long int)n;
	oct = 0;
	dec = 0;
	tmp = 0;
	i = 0;
	while (n > 0)
	{
		dec = n / 8;
		tmp = n % 8;
		oct = oct + (tmp * (ft_power_of(10,i)));
		i++;
		n = dec;
	}
	return (oct);
}

// int main()
// {
// 	long int a = ft_dec_to_oct(333333333);
// 	printf("oct %o\n", 333333333);
// 	printf("my dec_to_oct is %ld\n", a);
// 	return 0;
// }