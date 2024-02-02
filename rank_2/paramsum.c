#include <unistd.h>
void ft_putnbr(int nbr)
{
    if(nbr > 9)
    ft_putnbr(nbr / 10);
    write(1, &"0123456789"[nbr % 10], 1);
}
int main(int ac, char **av)
{
    (void)av;
    ac--;
    ft_putnbr(ac);
    write(1, "\n", 1);
}