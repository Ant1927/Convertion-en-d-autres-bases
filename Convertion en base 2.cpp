#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long int nombreAconvertir(0);
    cout << "Nombre a convertir : " ;
    cin >> nombreAconvertir ;
    string chaineFinal , chaineInter ;

    cout << "Le nombre en binaire s'ecrit :"  ;
    while (nombreAconvertir != 0)
    {
         if ((nombreAconvertir%2)==0)
        {
            chaineInter +='0' ;
            nombreAconvertir/=2 ;
        }
        else
        {
            chaineInter += '1' ;
            nombreAconvertir -=1 ;
            nombreAconvertir/=2 ;
        }
    }
    for (int i(chaineInter.size()); i>=0 ; i--)
    {
       chaineFinal += chaineInter[i] ;
    }
    cout << chaineFinal << endl ;
    return 0 ;
}
