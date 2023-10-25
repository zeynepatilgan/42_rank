#include <unistd.h>
int atoi(char *c)
{
    int i = 0;
    int s = 0;
    while(c[i] <='9' && c[i] >= '0')
    {
        s = c[i] - 48 + s * 10;
        i++;
    }
    return(s);
}
void putnbr(int nbr)
{
    if(nbr >= 16)
        putnbr(nbr / 16);
    write(1, &"0123456789abcdef"[nbr % 16], 1);
}
int main(int ac, char **av)
{
    int i = 0;
    if(ac == 2)
    {
        putnbr(atoi(av[1]));
        write(1, "\n", 1);
    }
}