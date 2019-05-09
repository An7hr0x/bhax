#include <stdio.h>
#include <stdlib.h>

int
main ()
{
    int sorok_szama = 5;
    double **tm;
    
    
    if ((tm = (double **) malloc (sorok_szama * sizeof (double *))) == NULL)
    {
        return -1;
    }

    
    for (int i = 0; i < sorok_szama; ++i)
    {
        if ((tm[i] = (double *) malloc ((i + 1) * sizeof (double))) == NULL)
        {
            return -1;
        }

    }

    
    for (int i = 0; i < sorok_szama; ++i)
        for (int j = 0; j < i + 1; ++j)
            tm[i][j] = i * (i + 1) / 2 + j;

    for (int i = 0; i < sorok_szama; ++i)
    {
        for (int j = 0; j < i + 1; ++j)
            printf ("%f, ", tm[i][j]);
        printf ("\n");
    }
/*
    tm[3][0] = 42.0;
    (*(tm + 3))[1] = 43.0;	// mi van, ha itt hiányzik a külső ()
    *(tm[3] + 2) = 44.0;
    *(*(tm + 3) + 3) = 45.0;

    for (int i = 0; i < sorok_szama; ++i)
    {
        for (int j = 0; j < i + 1; ++j)
            printf ("%f, ", tm[i][j]);
        printf ("\n");
    }
*/
    for (int i = 0; i < sorok_szama; ++i)
        free (tm[i]);

    free (tm);

    return 0;
}
