#include <iostream>
using namespace std;

int main() {
    int liczba;
    char kontynuuj;

    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        cout << "Wprowadziles liczbe: " << liczba << endl;
        cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
        cin >> kontynuuj;

    } while (kontynuuj == 't');

    cout << "Dziekuje za wprowadzenie liczb!" << endl;

    return 0;
}
