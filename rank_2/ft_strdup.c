#include <stdio.h>
#include <stdlib.h>
char *ft_strdup(char *src)
{
    int i = 0;
    char *str;
    int len;
    if(!src)
        return(NULL);
    while(src[i])
    i++;
    str = malloc * (i + 1);
    i = 0;
    while(src[i])
    {
     str[i] = src[i];
     i++;   
    }
    str[i] = '\0';
    return(str);
}
