#include <iostream>
using namespace std;

int main() {
    int n;
    int m;
    int kapasitas = 5;
    

    cout << "Masukkan jumlah box: ";
    cin >> n;
    cout << "Masukkan total perabotan: "; 
    cin >> m;



    for (int i = 1; i <= n; i++) {
       
    if (m > 0) {
        if (n = 0) {
            cout << "Box tidak cukup" << endl;
        }
        if (m > kapasitas) {
            cout << "Box ke-" << i << " penuh" << endl;
            cout << "Memindahkan perabotan" << endl;
            m -= kapasitas;
        } else {
            cout << "Box ke-" << i << " terisi " << m << " perabotan" << endl;
            m = 0;
            cout << "Perabotan telah dikemas" << endl;
                break;
        }
        
    }

    
    }

    return 0;
}