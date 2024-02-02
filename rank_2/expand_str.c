#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    int flag = 0;
    if(ac == 2)
    {
    while(av[1][i])
    {
    if(av[1][i] > 32 && (av[1][i + 1] == '\0' || av[1][i + 1] <= 32))
    flag++;
    i++;
    }
    i = 0;
   while(av[1][i] <= 32)
   i++;
   while(flag > 0)
   {
   while(av[1][i] <= 32 )
    i++;
    while(av[1][i] > 32 )
        write(1, &av[1][i++], 1);
    if(flag > 1)
        write(1, "   ", 3);
    flag--;
   }
    }
    write(1, "\n", 1);
}