
#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts, uas, tugas, nilai_akhir;
};

float hitungNilai(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

int main() {
    Mahasiswa mhs[10];
    int n;

    cout << "Jumlah mahasiswa (maks. 10): ";
    cin >> n;
    cin.ignore();

    if (n < 1 || n > 10) {
        cout << "Jumlah mahasiswa tidak valid!" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nData mahasiswa ke-" << i + 1 << endl;

        cout << "Nama  : ";
        getline(cin, mhs[i].nama);

        cout << "NIM   : ";
        getline(cin, mhs[i].nim);

        cout << "Nilai UTS   : ";
        cin >> mhs[i].uts;

        cout << "Nilai UAS   : ";
        cin >> mhs[i].uas;

        cout << "Nilai Tugas : ";
        cin >> mhs[i].tugas;
        cin.ignore();

        mhs[i].nilai_akhir = hitungNilai(
            mhs[i].uts, mhs[i].uas, mhs[i].tugas
        );
    }

    cout << "\n===== DATA MAHASISWA =====" << endl;

    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Nama        : " << mhs[i].nama << endl;
        cout << "NIM         : " << mhs[i].nim << endl;
        cout << "UTS         : " << mhs[i].uts << endl;
        cout << "UAS         : " << mhs[i].uas << endl;
        cout << "Tugas       : " << mhs[i].tugas << endl;
        cout << "Nilai Akhir : " << mhs[i].nilai_akhir << endl;
    }

    return 0;
}
