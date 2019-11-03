#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "getfile.h"

// Skriv gcc run.c getfile.c -o start
// start

//Todo refactor code

int main()
{

    getFile();

}








/*
    Rövarspråk som tar in värden från en pre-defined text-fil och sedan översätter varje rad till rövarspråk. 
    Programmet kan räkna antalet tecken och exkludera mellanrum, och på såvis är den skalbar dvs man behöver inte hårdkoda längden på char-listan

    Exempel:

    (input.txt) - Användaren kan manuellt skriva in värden i input.txt och så kommer dem automatiskt översättas i output.txt
        Adam
        Anna
        Per
    (output.txt)
        Adodamom
        Anonnona
        Poperor

    Note: Varje gång som programmet körs så överskrids output.txt och tidigare data glöms bort.

    Struktur: 
        run.c = main fil
        getfile.c = hämta, översätt och returnera buffer
*/