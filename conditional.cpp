#include <iostream>
using namespace std;

int main() {
    int detik;
    cout << "Masukkan waktu parkir dalam detik: ";
    cin >> detik;

    int jam = detik / 3600;
    int sisa = detik % 3600;
    int menit = sisa / 60;
    int detik_sisa = sisa % 60;

    int harga;
    if (jam == 0 && sisa > 0) {
        harga = 1000;
    } else {
        harga = 1000; 
        if (detik > 3600) {
            int jam_selanjutnya = (detik - 3600 + 3599) / 3600;
            harga += jam_selanjutnya * 2000;
        }
    }

    cout << "Waktu parkir: " << jam << " jam, " << menit << " menit, " << detik_sisa << " detik.\n";
    cout << "Total biaya parkir: Rp " << harga << endl;

    return 0;
}