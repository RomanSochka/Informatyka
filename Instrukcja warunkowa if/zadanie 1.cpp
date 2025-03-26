#include <iostream>
using namespace std;

int main() {
    int punkty;
    
    cout << "podaj wynik egzaminu(liczbe punktow): ";
    cin >> punkty;
    
    if (punkty < 0 ; punkty > 100) {
               cout << "wystapil blad" << endl
               }
               else {
                    if (punkty >= 0 ; punkty <= 49) {
                    cout << "ocena niedostateczna" << endl;
                    }else if (punkty >= 50 ; punkty <= 69) {
                    cout << "ocena dostateczna" << endl;
                    }else if (punkty >= 70 ; punkty <= 84) {
                    cout << "ocena dobra" << endl;
                    }else if (punkty >= 85 ; punkty <= 99) {
                    cout << "ocena bardzo dobra" << endl;
                    }else if (punkty ==100) {
                    cout << "ocena celujaca" << endl;
                    }
}
return 0
}
