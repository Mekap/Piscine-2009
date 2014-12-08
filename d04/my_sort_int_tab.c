/*
** By Gaya Bernou
** my_sort_int_tab = réalisé avec un simple tri à bulle
*/

void    my_sort_int_tab(int *tab, int size)
{
  int   i;
  int   token;
  int   nb;

  nb = 0;
  token = 0;
  while (token == 0)
    {
      i = 0;
      token = 1;
      while ((i + 1) < size)
        {
          if (tab[i] > tab[i + 1])
            {
              token = 0;
              my_swap(&tab[i], &tab[i + 1]);
            }
          i = i + 1;
        }
      nb++;
    }
}
