
#include "soal1.h"

int main() {
    List L;
    address P, Q;
    infotype data;

    CreateList(L);

    // Input data kendaraan
    for (int i = 1; i <= 4; i++) {
        cout << "Masukkan nomor polisi: ";
        cin >> data.nopol;

        cout << "Masukkan warna kendaraan: ";
        cin >> data.warna;

        cout << "Masukkan tahun kendaraan: ";
        cin >> data.thnBuat;

        P = alokasi(data);
        insertLast(L, P);

        cout << endl;
    }

    // Menampilkan data
    cout << "\nDATA LIST 1" << endl;
    printInfo(L);

    // Mencari D001
    cout << "\nMENCARI DATA D001" << endl;

    P = findElm(L, "D001");

    if (P != NULL) {
        cout << "Nomor Polisi : " << P->info.nopol << endl;
        cout << "Warna        : " << P->info.warna << endl;
        cout << "Tahun        : " << P->info.thnBuat << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    // Menghapus D003
    cout << "\nMENGHAPUS DATA D003" << endl;

    P = findElm(L, "D003");

    if (P != NULL) {
        if (P == L.First) {
            deleteFirst(L, Q);
        } else {
            deleteAfter(L, P->prev, Q);
        }

        cout << "Data D003 berhasil dihapus" << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    // Menampilkan data setelah dihapus
    cout << "\nDATA SETELAH DIHAPUS" << endl;
    printInfo(L);

    return 0;
}
