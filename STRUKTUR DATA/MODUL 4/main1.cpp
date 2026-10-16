
#include <iostream>
#include <string>
using namespace std;

struct Node {
    string nama;
    Node* next;
};

Node* depan = NULL;
Node* belakang = NULL;

void insertLast(string nama) {
    Node* baru = new Node;
    baru->nama = nama;
    baru->next = NULL;

    if (depan == NULL) {
        depan = belakang = baru;
    } else {
        belakang->next = baru;
        belakang = baru;
    }
}

void deleteFirst() {
    if (depan == NULL) {
        cout << "Antrean kosong!\n";
        return;
    }

    Node* hapus = depan;

    cout << "Nasabah yang dilayani: "
         << hapus->nama << endl;

    depan = depan->next;

    if (depan == NULL) {
        belakang = NULL;
    }

    delete hapus;
}

void tampilkan() {
    Node* bantu = depan;

    cout << "Antrean: ";

    if (bantu == NULL) {
        cout << "Kosong";
    }

    while (bantu != NULL) {
        cout << bantu->nama;

        if (bantu->next != NULL) {
            cout << " -> ";
        }

        bantu = bantu->next;
    }

    cout << endl;
}

int main() {
    int pilihan;
    string nama;

    while (true) {
        cout << "\n=== ANTREAN BANK ===\n";
        cout << "1. Tambah nasabah\n";
        cout << "2. Layani nasabah\n";
        cout << "3. Keluar\n";
        cout << "Pilihan: ";

        if (!(cin >> pilihan)) {
            cout << "Input harus berupa angka!\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        if (pilihan == 1) {
            cout << "Nama nasabah: ";
            cin.ignore(10000, '\n');
            getline(cin, nama);

            insertLast(nama);
            tampilkan();
        }
        else if (pilihan == 2) {
            deleteFirst();
            tampilkan();
        }
        else if (pilihan == 3) {
            cout << "Program selesai.\n";
            break;
        }
        else {
            cout << "Pilihan tidak valid!\n";
        }
    }

    return 0;
}
