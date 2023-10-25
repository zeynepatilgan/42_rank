int ft_skotrl(char c, int str_base)
{
    char dizi[17] = "0123456789abcdef";
    char dizi2[17] = "0123456789ABCDEF";
    while(str_base--)
        if(dizi[str_base] == c || dizi2[str_base] == c)
            return(1);
    return(0);
}
int ft_cevir(char c)
{
    if(c >= '0' && c <= '9')
        return(c - '0');
    else if(c >= 'a' && c <= 'f')
        return(c - 'a' + 10);
    else if(c >= 'A' && c <= 'F')
        return(c - 'A' + 10);
    return(0);
}
int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int s = 0;
    int is = 1;
    if(str[i] == '-')
    {
        is *= -1;
        i++;
    }
    while(ft_skotrl(str[i], str_base))
        s = s * str_base + ft_cevir(str[i++]);
    return(s * is);
}