#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
void division(int& nombreEntre, int const& baseVoulue, vector<string>& nombre, string tableauConversion[36]){
    cout << nombreEntre << " / " << baseVoulue << endl;
    cout << "Quotient: " << nombreEntre / baseVoulue << endl;
    cout << "Reste: " << nombreEntre % baseVoulue << endl << endl;
 
    nombre.push_back(tableauConversion[nombreEntre % baseVoulue]);
}
 
int main()
{
    int nombreEntre, baseVoulue;
    vector<string> nombre(0);
    string tableauConversion[36] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
 
    cout << "Nombre ?" << endl;
    cin >> nombreEntre;
    cout << "Vers quelle base ?" << endl;
    cin >> baseVoulue;
    cout << endl;
 
    division(nombreEntre, baseVoulue, nombre, tableauConversion);
 
    while(nombreEntre / baseVoulue != 0){
        nombreEntre /= baseVoulue;
        division(nombreEntre, baseVoulue, nombre, tableauConversion);
    }
 
    cout << "Nombre de chiffres du nombre entre ecrit en base " << baseVoulue << ": " << nombre.size() << endl;
 
    for(int i = nombre.size()-1; i >= 0; i--){
        cout << nombre[i];
    }
 
    return 0;
}