#include <unistd.h>
#include <stdarg.h>

void	ft_putstr(char *str, int *len)
{
	if (!str)
		str = "(null)";
	while (*str)
		*len += write(1, str++, 1);
}

void	ft_putnbr(long long int num, int base, int *len)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (num < 0)
	{
		num *= -1;
		*len += write(1, "-", 1);
	}
	if (num >= base)
		ft_putnbr((num / base), base, len);
	*len += write(1, &hex[num % base], 1);
}

int	ft_printf(const char *format, ...)
{
	int	len;

	len = 0;
	va_list ptr;
	va_start(ptr, format);
	while (*format)
	{
		if ((*format == '%') && ((*(format + 1) == 's') || (*(format + 1) == 'd') || (*(format + 1) == 'x')))
		{
			format++;
			if (*format == 's')
				ft_putstr(va_arg(ptr, char *), &len);
			else if (*format == 'd')
				ft_putnbr(va_arg(ptr, int), 10, &len);
			else if (*format == 'x')
				ft_putnbr(va_arg(ptr, unsigned int), 16, &len);
		}
		else
			len += write(1, format, 1);
		format++;
	}
	return (va_end(ptr), len);
}