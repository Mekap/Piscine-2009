/*
** By gaya Bernou
** affiche toutes les lettres de l'alphabet dans l'ordre croissant
*/
void my_aff_alpha() {
    char a = 'a';
    while (a <= 'z')
    {
        write(1,&a,1);
        a++;
    }
    write(1, "\n",1);
}