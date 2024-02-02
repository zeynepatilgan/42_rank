#include <unistd.h>
#include <stdarg.h>

void ft_putstr(char *str, int *len)
{
    if(!str)
        str = "(null)";
    while (*str)
        *len += write(1, str++, 1);
}

void ft_puthex(long long int nbr, int base, int *len)
{
    if(nbr < 0)
    {
        nbr *= -1;
        *len += write(1, "-", 1);
    }
    if(nbr >= base)
        ft_puthex((nbr / base), base, len);
    *len += write(1, &"0123456789abcdef"[nbr % base], 1);
}

int ft_printf(const char *str, ...)
{
    int len = 0;
    va_list ptr;

    va_start(ptr, str);
    while (*str)
    {
        if(*str == '%' && *(str + 1))
        {
            str++;
            if(*str == 's')
                ft_putstr(va_arg(ptr, char *), &len);
            else if(*str == 'd')
                ft_puthex((long long int)va_arg(ptr, int), 10, &len);
            else if(*str == 'x')
                ft_puthex((long long int)va_arg(ptr, unsigned int), 16, &len);
        }
        else
            len += write(1, str, 1);
        str++;
    }
    return(va_end(ptr), len);
}
