#include "ft_printf.h"

char	*lld_form(va_list args)
{
	char				*num;
	long long int		ll_n;

	ll_n = va_arg(args, long long int);
	num = ft_llitoa(ll_n);
	return (num);
}

char	*llx_form(va_list args)
{
	char					*hex;
	unsigned long long int	ll_n;

	ll_n = va_arg(args, unsigned long long int);
	hex = ft_llitoa_base(ll_n, 16);
	return (hex);
}

char	*lluppx_form(va_list args)
{
	char					*hex;
	unsigned long long int	ll_n;

	ll_n = va_arg(args, unsigned long long int);
	hex = ft_llitoa_base(ll_n, 16);
	ft_strupper(hex);
	return (hex);
}

char	*llo_form(va_list args)
{
	char						*oct;
	unsigned long long int		ll_n;

	ll_n = va_arg(args, unsigned long long int);
	oct = ft_llitoa_base(ll_n, 8);
	return (oct);
}

char	*llu_form(va_list args)
{
	char					*u_num;
	unsigned long long int	ll_n;


	ll_n = va_arg(args, unsigned long long int);
	u_num = ft_uitoa(ll_n);
	return (u_num);
}
