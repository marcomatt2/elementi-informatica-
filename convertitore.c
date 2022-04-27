#include <stdio.h>
#include <stdlib.h>
int main()
{
    double pollici;
    double centimetri;
    printf("inserisci il valore dei pollici:\n");
    scanf("%lf", &pollici);
    if(pollici>=0)
    {
        centimetri = pollici * 2.54;
        printf("i centimetri valgono:%lf\n", centimetri);

    } else
    {
         printf("ERRORE HAI INSERITO VALORE NEGATIVO");
    }
    return 0;
}
