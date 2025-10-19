#include <iostream>
using namespace std;

int main() {
    int umur;
    string KursiBioskop;

    cout << "Masukkan umur kamu: ";
    cin >> umur;

    // Menentukan rating film dan kursi berdasarkan umur
    if (umur < 13) {
        cout << "Rating film yang boleh kamu tonton: SU" << endl;
        KursiBioskop = "Anak-anak";
    } else if (umur >= 13 && umur <= 16) {
        cout << "Rating film yang boleh kamu tonton: R13" << endl;
        KursiBioskop = "Remaja";
    } else if (umur >= 17 && umur <= 20) {
        cout << "Rating film yang boleh kamu tonton: D17" << endl;
        KursiBioskop = "Dewasa muda";
    } else {
        cout << "Rating film yang boleh kamu tonton: D21" << endl;
        KursiBioskop = "Dewasa";
    }

    cout << "Maka dia akan duduk di kursi " << KursiBioskop << endl;

    return 0;
}

