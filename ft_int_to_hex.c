#include "ft_printf.h"

int check_size(int n)
{
	int size;
	int i;
	size = 0;
	i = 1;
	while(i <= n)
	{
		size++;
		i = i * 16;
	}
	return size;
}

int power_of(int n, int expo)
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

char  set_hex(int *n, char *ind, int size)
{
	int rem;
	int next;
	int ans;
	char hex;
	int power;

	rem  = 0;
	ans = 0;
	power = 0;



	power = (power_of(size, 16));
	ans = *n/power;
	*n = *n - (ans * power);
	hex = ind[ans];
	return (hex);
}


char *ft_int_to_hex(int n)
{
	char *hex;
	char *index;
	int size;
	int i;


	i = 0;
	size = check_size(n);
	index = "0123456789abcdef";

	hex = (char*)malloc((size) * sizeof(char));
	
	while(size > 0)
	{
		hex[i] = set_hex(&n, index, size);
		i++;
		size--;
	}
	hex[i] = '\0';
	return (hex);
}