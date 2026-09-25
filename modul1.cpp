// #include <iostream>
// using namespace std;

// int main() {
//     float a, b;

//     cin >> a >> b;

//     cout << "Penjumlahan = " << a + b << endl;
//     cout << "Pengurangan = " << a - b << endl;
//     cout << "Perkalian = " << a * b << endl;
//     cout << "Pembagian = " << a / b << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     string angka[] = {
//         "nol", "satu", "dua", "tiga", "empat",
//         "lima", "enam", "tujuh", "delapan", "sembilan"
//     };

//     if (n < 10)
//         cout << angka[n];
//     else if (n < 20)
//         cout << angka[n - 10] << " belas";
//     else if (n < 100) {
//         cout << angka[n / 10] << " puluh";
//         if (n % 10 != 0)
//             cout << " " << angka[n % 10];
//     }
//     else
//         cout << "seratus";

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--) {

        // spasi agar semakin ke bawah semakin ke tengah
        for (int s = 0; s < n - i; s++) {
            cout << "  ";
        }

        // angka kiri
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << "* ";

        // angka kanan
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    // bintang terakhir
    for (int s = 0; s < n; s++) {
        cout << "  ";
    }
    cout << "*";

    return 0;
}