#include "ft_printf.h"
#include <stdio.h>

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

int power_of(int n)
{
	int i;
	int power;
	i = 1;
	power = 1;
	while(i < n)
	{
		power = power * 16;
		i++;
	}
	printf("\n%d\n", power);
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



	power = (power_of(size));
	ans = *n/power;
	*n = *n - (ans * power);
	hex = ind[ans];
	// printf("hex|%d| is %d\n", size, ans);
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
	printf("size is %d", size);
	
	while(size > 0)
	{
		hex[i] = set_hex(&n, index, size);
		i++;
		size--;
	}
	printf("i is |%d|\n",i);
	hex[i] = '\0';
	return (hex);
}

int main()
{
	char *st = ft_int_to_hex(5000000);
	printf("\nhex printf %s",st);
}




// 	int rem;
// 	int next;
// 	int ans;
// 	int tmp;
// 	int power;
// 	rem  = 0;
// 	next = 0;
// 	ans = 0;
// 	tmp = 0;
// 	power = 0;

// 	i = 0;
// 	size = check_size(n);
// 	index = "0123456789abcdef";

// 	hex = (char*)malloc((size + 1) * sizeof(char));
// 	printf("size is %d", size);
	
// 	while(size > 0)
// 	{
// 		power = (power_of(size));
// 		ans = n/power;
// 		next = n - (ans * power);
// 		printf("hex|%d| is %d\n", size, ans);
// 		n = next;
// 		hex[i] = index[ans];
// 		i++;
// 		size--;
// 	}
// 	hex[i + 1] = '\0';
// 	return (hex);
// }