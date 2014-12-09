/*
** By gaya Bernou
** affiche tout les chiffres dans l'ordre croissant
*/
void my_aff_chiffre() {
    char a = '0';
    while (a <= '9')
    {
        write(1,&a,1);
        a++;
    }
    write(1, "\n",1);
}