#include <unistd.h>
int main(int ac, char **av)
{
    int i = 1, i2 = 0, j = 0;
    if(ac < 2)
        write(1, "\n", 1);
    if(ac > 1)
    {
    while(av[i][j])
    {
        while(av[i][j])
        {
            if(av[i][j] >= 'A' && av[i][j] <= 'Z')
                av[i][j] += 32;
            j++;
        }
        j = 0;
        while(av[i][j])
    { 
            if(av[i][j] >= 'a' && av[i][j] <= 'z')
            {
                if(i2 == 0)
                {
                    i2 = 1;
                    av[i][j] -= 32;
                }
                write(1, &av[i][j], 1);
            }
            else if(av[i][j] == ' ' || av[i][j] == '\t')
            {
                 i2 = 0;
                write(1, &av[i][j], 1); 
            }
            else 
            {
                i2 = 1;
                write(1, &av[i][j], 1);
            }
            j++;
        }
        i2 = 0;
        j = 0;
        write(1, "\n", 1);
        if((ac - 1) == i)
            break;
        i++;
    }
    }
}
