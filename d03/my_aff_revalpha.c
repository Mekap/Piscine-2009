/*
** By gaya Bernou
** affiche toutes les lettres de l'alphabet dans l'ordre décroissant
*/
void my_aff_revalpha() {
    char a = 'z';
    while (a >= 'a')
    {
        write(1,&a,1);
        a--;
    }
    write(1, "\n",1);
}