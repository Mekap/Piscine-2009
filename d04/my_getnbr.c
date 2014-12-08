/*
** By Gaya Bernou
** my_getnbr = atoi() : Str -> int
** Ne gère pas les overflows 
*/

int minus(char *str, int *i)
{
    int neg = 1;
    while (str[*i] == ' ')  (*i)++; // behaviour of atoi, skips whitespaces
    while (str[*i] == '-' || str[*i] == '+')
    {
     if (str[*i] == '-') neg = -neg;
     (*i)++;
    }
    return neg;   
}

int my_getnbr(char *str)
{
    int res = 0;
    int i = 0;
    int neg = minus(str, &i);
    
    while (str[i] && (str[i] <= '9' && str[i] >= '0' )) {
        res = res * 10 + str[i]-'0';
        i++;
     }
     if (neg == -1)
        return  - res;    
    return res;
}