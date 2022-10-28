#ifndef NAGLOWEK                              //  rev. 2022_10_06_
 #define NAGLOWEK


 #include <conio.h>
 #include <iostream>
 using namespace std;



 #define    COUT        cout <<
 #define    CIN         cin >>

 #define    ENDL        COUT endl;

 #define    PAUSE       ENDL getch(); return 0

 #define    CLRSCR      system ("cls")




 #define    POKAZ(zmienna)    COUT "\n " << #zmienna << " = " << (zmienna)



 #define    POKAZ_T(nazwa_tabeli,ile) 							                    \
                                                                                    \
    for (int i=0 ; i<ile ; i++ ) 	                                                \
	{ 												                                \
        COUT "\n " << #nazwa_tabeli << "[" << i << "] = " << nazwa_tabeli[i];       \
	}                                                       \




 #define    INIC(tablica,rozmiar)					\
 {													\
	for (int i=0 ; i<rozmiar ; i++ )				\
	{												\
		tablica[i] = 0;								\
	}												\
 }



#endif // NAGLOWEK
