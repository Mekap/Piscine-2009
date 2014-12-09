/*
** By gaya Bernou
** affiche de 00 00 à 01 99 à 98 99
*/

void  my_affcomb2() {
int a, b, c,d;
    for(a=0;a<=9;a++)
    {
        for(b=0;b<=8;b++)
        {   
            for(c=0;c<=9;c++)
            {
                for(d=0;d<=9;d++)
                {
                    if (a == 9 && b == 8 && c == 9 && d == 9)
                        printf("%d%d %d%d\n",a,b,c,d);
                    else
                        printf(" %d%d %d%d,",a,b,c,d);
                }
            }
        }
    }
}
