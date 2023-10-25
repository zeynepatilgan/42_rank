#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int s = 0;
    if(ac == 3)
    {
        while(av[2][j])
        {
            if(av[1][i] == av[2][j])
            {
            i++;
            j++;
            s++;
            }
           else
              j++;
        }
        i = 0;
        while(av[1][i])
        i++;
        if(i == s)
        {
            i = 0;
            while(av[1][i])
                write(1, &av[1][i++], 1);
        }
    }
    write(1, "\n", 1);
}