#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    int bas;
    int son;
    int flag = 0;
    if(ac == 2)
    {
         while(av[1][i])
            {
              if(av[1][i] > 32 && (av[1][i + 1] == '\0' || av[1][i + 1] <= 32))
                flag++;
             i++;
            } 
        --i;
        while(flag > 0)
        {
        while(av[1][i] <= 32 && av[1][i])
        i--;
        son = i;
        while(av[1][i] > 32 && av[1][i])
        i--;
        bas = i + 1;
        while(av[1][bas] > 32)
        write(1, &av[1][bas++], 1);  
        if (flag > 1)
            write(1, " ", 1); 
        
        bas = i + 1;
         flag--; 
        }
     }
    write(1, "\n", 1);
}