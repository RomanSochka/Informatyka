#include <iostream>
using namespace std;

int main() {
   
    double celsius, wynik;
    char jednostka;

    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> celsius;
    cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> jednostka;

    switch(jednostka) {
        case 'K': 
            wynik = celsius + 273.15;
            cout << "Temperatura w stopniach Kelvina: " << wynik << endl;
            break;
        case 'F': 
            wynik = (celsius * 9/5) + 32;
            cout << "Temperatura w stopniach Fahrenheita: " << wynik << endl;
            break;
        default:
            cout << "Blad: Nieznana jednostka!" << endl;
            break;
    }

    return 0;
}
