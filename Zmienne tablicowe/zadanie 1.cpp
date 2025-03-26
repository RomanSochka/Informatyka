#include <iostream>
using namespace std;

int main() {
    int liczby[5]; 
    int suma = 0;
    double srednia;

    for (int i = 0; i < 5; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> liczby[i];
    }

    for (int i = 0; i < 5; i++) {
        suma += liczby[i];
    }

    srednia = static_cast<double>(suma) / 5;
    cout << "Srednia liczb: " << srednia << endl;

    return 0;
}
