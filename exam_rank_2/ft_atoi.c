int ft_atoi(const char *str)
{
    int i = 0;
    int isaret = 1;
    int sayi = 0;

    while(str[i] <= 32)
    i++;
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            isaret *= -1;
        }
        i++;
    }
    while(str[i] <= '9' && str[i] >= '0')
    {
        sayi = str[i] - '0' + sayi * 10;
        i++;
    }
    return(sayi * isaret);
}
#include <stdio.h>
int main()
{
    printf("%d/n", ft_atoi("        -+--+146"));
}