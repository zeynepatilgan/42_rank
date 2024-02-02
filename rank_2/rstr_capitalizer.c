#include <unistd.h>
int main(int ac, char **av)
{
    int i = 1, flag = 0, j = 0;
    if(ac < 2)
        write(1, "\n", 1);
    if(ac >= 2)
    {
        while(av[i][j])
        {
            j = 0;
        while(av[i][j])
        {
           while(av[i][j] <= 32)
           j++;
           if(av[i][j] >= 'A' && av[i][j] <= 'Z')
           av[i][j] += 32;
           if(av[i][j + 1] <= 32 || av[i][j + 1] == '\0')
           flag++;
           j++; 
        }
        j = 0;
        while(flag > 0)
        {
            while(av[i][j])
            {
                if(av[i][j] >= 'a' && av[i][j] <= 'z')
                {
                if(av[i][j + 1] <= 32 || av[i][j + 1] == '\0')
                    av[i][j] -= 32;
                write(1, &av[i][j], 1);
                }
                else
                write(1, &av[i][j], 1);
                j++;
            }
            flag--;
        }
        i++;
        flag = 0;
        write(1, "\n", 1);
        }

    }
}