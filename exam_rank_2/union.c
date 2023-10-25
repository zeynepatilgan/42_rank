#include <unistd.h>
int main(int ac, char **av)
{
    int used[255] = {0}, i = 1, j;
    if(ac == 3)
    {
        while(i < 3)
        {
            j = 0;
            while(av[i][j])
            {
                if(!used[av[i][j]])
                {
                    used[av[i][j]] = 1;
                    write(1, &av[i][j], 1);
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}