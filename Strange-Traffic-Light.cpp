#include <iostream>
using namespace std;

int main() {
     int HIJAU = 20;
     int KUNING = 3;
     int MERAH = 80;
     int SIKLUS = HIJAU + KUNING + MERAH;
     int OFFSET = 25;
    
    int t;
    while (true) {
        cout << "Detik ke-";
        cin >> t;
        
        
        int posisi = (t - OFFSET) % SIKLUS;
        if (posisi < 0) posisi += SIKLUS;
        
        string warna = (posisi < HIJAU) ? "Hijau" :
                       (posisi < HIJAU + KUNING) ? "Kuning" : "Merah";
        
        cout << warna << endl;
    }
    
    return 0;
}