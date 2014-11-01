#include <iostream>
#include <string>
#include <cmath>

using namespace std ;

void versBinaire(int nombreAconvertir)
{
    string chaineFinal, chaineInter ;
    cout << "Le nombre en binaire s'ecrit : "  ;
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
    chaineFinal.erase(0,1) ;
    cout << chaineFinal << endl ;
}

void versDecimal(string nombreAconvertir)
{
    int taille(nombreAconvertir.size()),i(0) ;
    int nombreConvertit(0) ;
    for (i; i <=taille ; i++)
    {
        if (nombreAconvertir[i] == '1')
        {

        nombreConvertit += pow(2,taille-(i+1)) ;
        }
    }
    cout << "Le nombre en ecriture decimal est : " << nombreConvertit ;
}

int main()
{
    int reponse(0) ;
    cout << "En quoi voulez vous convertir le chiffre ? : " << endl ;
    cout << "   Taper 1 pour binaire" << endl ;
    cout << "   Taper 2 pour decimale" << endl ;
    cin >> reponse ;
    cout << "Entrez nombre : " ;
    if (reponse ==1)
    {
        int nombre(0);
        cin >> nombre ;
        versBinaire(nombre) ;
    }
    else
    {
        string nombre ;
        cin >> nombre ;
        versDecimal(nombre) ;
    }
    return 0 ;
}