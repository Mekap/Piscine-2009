
/*
** By  Gaya Bernou
** Affiche un int sur l'entrée standard
*/

void my_put_nbr(int nb)
{
  if (nb ==  -2147483648)
    write (1,"-2147483648",11);
    else 
    {
  if (nb < 0)
    {
      write(1,"-",1);
      nb = nb * -1;
    }
  if (nb / 10 != 0)
    my_put_nbr(nb / 10);
    char c = (nb % 10) + '0';
  write(1,&c,1);
    }
}