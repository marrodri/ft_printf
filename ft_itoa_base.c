#include "ft_printf.h"


static int check_size_base(int n, int base)
{
	int size;

	size = 0;
	if((n < 0) && (base == 10))
	{
		size++;
		n = n *-1;
	}
	else if (n < 0)
		n = n * -1;
	while(n > 0)
	{
		n = n / base;
		size++;
	}
	return (size - 1);
}



char	*ft_itoa_base(int value, int base)
{
	char *str;
	char *b_val;
	int size;
	int i;
	int rem;

	b_val = "0123456789abcdef";
	i = 0;
	if (value == 0)
	{
		return (ft_strdup("0"));
	}
	if (value == -2147483648 && base == 10)
		return (ft_strdup("-2147483648"));
	size = check_size_base(value, base);
	if((str = (char*)malloc((size + 1)*sizeof(char))) == NULL)
		return NULL;
	str[size + 1] = '\0';
	if((value < 0) && (base == 10))
	{

		str[0] = '-';
		value = value * -1;
		i++;
	}
	else if ((value < 0) && (base != 10))
	{
		value = value * -1;
	}
	while (size >= i)
	{
		rem = value % base;
		str[size] = b_val[rem];
		value = value / base;
		size--;
	}
	return (str);
}

int main()
{
	int a = -123;
	printf("value is |%s|\n", ft_itoa_base(a, 16));
	return 0;
}