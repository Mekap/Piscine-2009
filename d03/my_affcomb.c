/*
** By gaya Bernou
** affiche toutes les combinaisons de 3 chiffres différents dans l'ordre croissant.
*/

void  my_affcomb() {
int a, b, c;
    for(a=0;a<=7;a++)
    {
        for(b=a+1;b<=8;b++)
        {   
            for(c=b+1;c<=9;c++)
            {
            printf("%d%d%d\n",a,b,c);
            }
        }
    }
}
