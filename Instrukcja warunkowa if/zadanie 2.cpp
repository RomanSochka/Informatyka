#include <iostream>

using namespace std;

int main() {
    
    double waga, wzrost, bmi;

   
    cout << "Podaj wage (w kg): ";
    cin >> waga;
    cout << "Podaj wzrost (w metrach): ";
    cin >> wzrost;

    
    bmi = waga / (wzrost * wzrost);

   
    
    cout << "Twoje BMI wynosi: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Tw�j stan wagowy: Niedowaga" << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Tw�j stan wagowy: W normie" << endl;
    } else if (bmi >= 25 && bmi <= 29.9) {
        cout << "Tw�j stan wagowy: Nadwaga" << endl;
    } else {
        cout << "Tw�j stan wagowy: Otylosc" << endl;
    }

    return 0;
}
