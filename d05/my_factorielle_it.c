/*
** By Gaya Bernou
** Retourne N! réalisée de manière itérative.
*/

int my_factorielle_it(int nb)
{
  int i, res =1;
  
  if(nb<0) return 0;
  else
    {
    for(i=nb ; i>0 ; i--)     res*=i;
    return res;
    }
}