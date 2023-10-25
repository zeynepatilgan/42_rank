#include <unistd.h>
void putnbr(int nbr)
{
    if(nbr > 9)
    putnbr(nbr / 10);
    write(1, &"01234567890"[nbr % 10], 1);
}
int ft_atoi(char *c)
{
    int i = 0;
    int s = 0;
    while(c[i] >= '0' && c[i] <= '9')
    {
        s = c[i] - 48 + s * 10;
        i++;
    }
    return(s);
}
int main(int ac, char **av)
{
    int i;
    int nbr;
    if(ac == 2)
    {
        i = 1;
        nbr = ft_atoi(av[1]);
        while(i <= 9)
        {
            putnbr(i);
            write(1, " x ", 3);
            putnbr(nbr);
            write(1, " = ", 3);
            putnbr(nbr * i);
            if(i < 9)
            write(1, "\n", 1);
            i++;
        }

    }
    write(1, "\n", 1);
}