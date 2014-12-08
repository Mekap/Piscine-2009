/*
** by Gaya Bernou
** my_swap, échange le contenu de deux pointeurs sur entiers.
*/


void my_swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
