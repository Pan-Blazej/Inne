#include "h.h"
#define DLUGOSC 7

// -------------------------------------------------------------------------- //

int ile_zgodnych (char strzal[], char haslo[]);
int ile_trafien (char strzal[], char haslo[]);

// -------------------------------------------------------------------------- //

int main()
{
    char    haslo[DLUGOSC+1] {};
    char    strzal[DLUGOSC+1] {};

    char koniec;

    int liczba_prob;

    int dlugosc = DLUGOSC;

// -------------------------------------------------------------------------- //

while(1)        //  Petla dla calego programu. Koniec: 79.
{

      while(1)  //  Petla dla wpisywania hasla. Koniec: 44.
      {
          CLRSCR;
          COUT "\n ----- MASTERMIND -----";

          COUT "\n\n Wpisz haslo (" << dlugosc << " liter): ";

          for (int i=0 ; i<DLUGOSC ; i++)
          {
              haslo[i] = getch();
              COUT haslo[i];
          }

          COUT "\n\n Potwierdz haslo: \"" << haslo << "\"?"
            << "\n"
            <<  "\n (1 - OK, 0 - Popraw) ";

          koniec = getch();

          if (koniec=='1') break;

      }     //  Petla dla wpisywania hasla. Poczatek: 23.


      CLRSCR;
      COUT "\n ----- MASTERMIND -----"
        << "\n\n";

      liczba_prob = 1;

      while(1)  //  Petla dla zgadywania. Koniec: 71.
      {
          if (liczba_prob<10) COUT  "  " << liczba_prob << ". proba:    ";
          else                COUT  " "  << liczba_prob << ". proba:    ";

          for (int i=0 ; i<DLUGOSC ; i++)
          {
              strzal[i] = getch();
              COUT strzal[i];
          }

          COUT "    " << ile_trafien(strzal, haslo) << "/" << ile_zgodnych (strzal, haslo);
          ENDL;

          if (ile_trafien(strzal, haslo) == DLUGOSC) break;

          liczba_prob++;

      }      //  Petla dla zgadywania. Poczatek: 53.

      COUT "\n Brawo! Zgadles haslo za " << liczba_prob << ". razem!";

    COUT "\n\n Gramy jeszcze raz? (1-Tak, 0-Nie) ";
    koniec = getch();
    if (koniec=='0') break;

}   //  Petla dla calego programu. Poczatek: 20.

    COUT "\n\n --------------------------------- \n";
    return 0;

}

// -------------------------------------------------------------------------- //

int ile_zgodnych (char strzal[], char haslo[])
{
    int rezultat{};

    bool odhaczone[DLUGOSC+1] {};
    bool teraz {};

    for (int s=0 ; s<DLUGOSC ; s++)
    {

//        COUT "---- Sprawdzam " << s+1 << ". litere strzalu, czyli " << strzal[s] << ": \n\n";

        for (int h=0 ; h<DLUGOSC ; h++)       //  Porownuje z kazda litera hasla.
        {

//            COUT " Porownuje z " << h+1 << " litera hasla, czyli " << haslo[h] << ": ";

            teraz = 0;

//            if (odhaczone[h]) COUT "odhaczona!";

//            else if (strzal[s]!=haslo[h]) COUT "pudlo!";

            if ((strzal[s]==haslo[h]) and (!odhaczone[h]))
            {

//                COUT "trafiony!";
                rezultat++;
                odhaczone[h] = true;
                teraz = 1;
            }

//            ENDL;

            if (teraz) break;
        }
    }

    return rezultat;
}

// -------------------------------------------------------------------------- //

int ile_trafien (char strzal[], char haslo[])
{
    int rezultat {};

    for (int i=0 ; i<DLUGOSC ; i++)
    {
        if (strzal[i]==haslo[i]) rezultat++;
    }

    return rezultat;
}

// -------------------------------------------------------------------------- //
