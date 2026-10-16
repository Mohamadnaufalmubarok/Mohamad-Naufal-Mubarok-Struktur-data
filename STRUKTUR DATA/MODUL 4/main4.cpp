
#include <iostream>
#include <string>
using namespace std;

struct Node {
    string judul;
    int tahun;
    Node* next;
};

Node* head = NULL;

void tambah(string judul, int tahun) {
    Node* baru = new Node{judul, tahun, NULL};

    if (head == NULL) {
        head = baru;
    } else {
        Node* bantu = head;

        while (bantu->next != NULL) {
            bantu = bantu->next;
        }

        bantu->next = baru;
    }
}

void deleteLast() {
    if (head == NULL) {
        return;
    }

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* bantu = head;

    while (bantu->next->next != NULL) {
        bantu = bantu->next;
    }

    delete bantu->next;
    bantu->next = NULL;
}

void tampilkan() {
    Node* bantu = head;

    cout << "Daftar Buku:\n";

    while (bantu != NULL) {
        cout << bantu->judul << " ("
             << bantu->tahun << ")" << endl;

        bantu = bantu->next;
    }
}

int main() {
    int N, tahun;
    string judul;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> judul >> tahun;
        tambah(judul, tahun);
    }

    deleteLast();
    tampilkan();

    return 0;
}
