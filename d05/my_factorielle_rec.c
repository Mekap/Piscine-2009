/*
** By Gaya Bernou
** Retourne N! r�alis�e de mani�re r�cursive.
*/
 
int     my_factorielle_rec(int n)
{
  if (n < 0 || n > 12)
    return (0);
  else if (n == 0)
    return (1);
  else
    return (n * my_factorielle_rec(n - 1));
}
