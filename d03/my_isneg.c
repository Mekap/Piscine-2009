/*
** By gaya Bernou
** affiche N ou P (et retourn 1 ou 0) suivant si le nombre est négatif ou positif
*/

int  my_isneg(int n) {
    if (n >= 0)
    {
        write(1, "P",1);
        return 0;
    }
    else
      write(1, "N",1);
    return 1;
}