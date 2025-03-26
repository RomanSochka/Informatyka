#include <iostream> 
using namespace std;

int main() {
    int a, b, suma;
    cout << "podaj pierwsza liczbe: ";
    cin  >> a;
    cout << "podaj druga liczbe: ";
    cin >> b;
    
    suma = a + b;
    cout << "suma" << suma << endl;
    cout << "suma jest liczba " << (suma % 2 == 0 ? "parzysta" : "nieparzysta") << endl;
    
    return 0;
}
