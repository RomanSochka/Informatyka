#include <iostream>
using namespace std;

int main() {
    int liczby[10];  
    int suma_Parzystych = 0;

    cout << "Podaj 10 liczb calkowitych:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> liczby[i];
    }
    cout << "Liczby parzyste: ";
    for (int i = 0; i < 10; i++) {
        if (liczby[i] % 2 == 0) { 
            cout << liczby[i];
            suma_Parzystych += liczby[i];  
            if (i < 9) {  
                cout << ", ";
            }
        }
    }
    cout << endl;
    cout << "Suma liczb parzystych: " << suma_Parzystych << endl;

    return 0;
}
