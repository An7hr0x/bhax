#include <stdio.h>
#include <unistd.h>
#include <string.h>


#define MAX_KULCS 100
#define BUFFER_MERET 256


int
main (int argc, char **argv)
{

  
  char kulcs[MAX_KULCS]; /* A töréshez szükséges kulcs. */  
  char buffer[BUFFER_MERET]; /*A bufferben tároljuk majd az eredményt. */  
  int kulcs_index = 0; /*A kulcsot karakterről-karakterre léptetjuk majd (de)kódolás közben*/
  int olvasott_bajtok = 0; /*Az eddig összesen beolvasott bájtok száma*/  
  int kulcs_meret = strlen (argv[1]); /*A kulcsot megadjuk az első parancssori argumentumban, méretét rögzítjük a strlen függvénnyel*/
  strncpy (kulcs, argv[1], MAX_KULCS); /*Belemásoljuk a megadott kulcsot a 'kulcs' változóba*/
  while ((olvasott_bajtok = read (0, (void *) buffer, BUFFER_MERET)))
    {

      
      for (int i = 0; i < olvasott_bajtok; ++i)
	{
	  
	  buffer[i] = buffer[i] ^ kulcs[kulcs_index];
          
	  kulcs_index = (kulcs_index + 1) % kulcs_meret;

	}

      write (1, buffer, olvasott_bajtok);

    }
}
