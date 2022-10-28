#include "h.h"
#include <vector>

int main()
{
    vector <int>  wiktor;

    int x;
    
    COUT "\n Podaj int: ";

    CIN x;

    wiktor.resize (x);

   for (int i=0 ; i<x ; i++ )
   {
       wiktor[i] = i*17;
   }

   for (int i=0 ; i<x ; i++ )
   {
       COUT "\n wiktor[" << i << "] = " << wiktor[i];
   }

    PAUSE;
}
