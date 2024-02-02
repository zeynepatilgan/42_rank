#include <unistd.h>
int atoi (char *c)
{
    int i = 0;
    int s = 0;
    while(c[i] <= '9' && c[i] >= '0')
    {
        s = c[i] - 48 + s * 10;
        i++;
    }
    return(s);
}
void putnbr(int nbr)
{
    if(nbr > 9)
    putnbr(nbr / 10);
    write(1, &"01234567890"[nbr % 10], 1);
}
int is_prime(int nb)
{
    int i = 2;
    while(i < nb)
    {
        if(nb %  i == 0)
            return(0);
        i++;
    }
    return(1);

}
int main(int ac, char **av)
{
    int i = 2;
    int nbr;
    int sonuc;
    int s = 0;
    if(ac == 2)
    {
     nbr = atoi(av[1]);
     if(nbr == 0)
     putnbr(0);
     if(nbr == 1)
     putnbr(0);
     if(nbr >= i)
     {
        while(i <= nbr)
        {
            sonuc = is_prime(i);
            if( sonuc == 1)
            {
                s += i;
                i++;
            }
            else
            i++;
        }
     putnbr(s);

     }
       
    }
    if(ac != 2)
        write(1, "0", 1);
    write(1, "\n", 1);
}