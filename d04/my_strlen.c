/*
** by Gaya Bernou
** my_strlen renvoie la longueur d'une chaine de caractères.
*/


int my_strlen(char *str)
{
  int i;
  for (i = 0;str[i]; i++);
  return i;
}
