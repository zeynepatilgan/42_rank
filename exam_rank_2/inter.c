#include <unistd.h>
int main(int ac, char **av)
{
    int used[255] = {0}, i = 2, j;
    if(ac == 3)
    {
        while(i > 0)
        {
            j = 0;
            while(av[i][j])
            {
                if(i == 2 && !used[av[i][j]])
                    used[av[i][j]] = 1;
                else if(i == 1 && used[av[i][j]] == 1) 
                {
                    write(1, &av[i][j], 1);
                    used[av[i][j]] = 8;
                }
                j++;
            }
            i--;
        }
    }
    write(1, "\n", 1);
}