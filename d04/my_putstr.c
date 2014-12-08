/*
** by Gaya Bernou
** my_putstr affiche à l'ecran la chaine sans utiliser les fonctions systeme.
*/

void my_putchar(char c)
{
  write(1, &c, 1);
}

void my_putstr(char *str)
{
  int i =0;
  for (; str[i]; i++) my_putchar(str[i]);
}
