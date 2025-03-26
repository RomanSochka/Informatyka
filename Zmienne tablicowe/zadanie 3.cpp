#include <iostream>
using namespace std;

int main() {
    int liczby[10]; 
    int najmniejszaLiczba;
  
    cout << "Podaj 10 liczb calkowitych:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> liczby[i];
    }
    najmniejszaLiczba = liczby[0];
    for (int i = 1; i < 10; i++) {
        if (liczby[i] < najmniejszaLiczba) {
            najmniejszaLiczba = liczby[i];
        }
    }

    cout << "Najmniejsza liczba to: " << najmniejszaLiczba << endl;

    return 0;
}
