
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void tambah(int nilai) {
    Node* baru = new Node{nilai, NULL};

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

void insertAfter(int cari, int nilaiBaru) {
    Node* bantu = head;

    while (bantu != NULL && bantu->data != cari) {
        bantu = bantu->next;
    }

    if (bantu == NULL) {
        cout << "Data tidak ditemukan!\n";
        return;
    }

    Node* baru = new Node{nilaiBaru, bantu->next};
    bantu->next = baru;
}

void tampilkan() {
    Node* bantu = head;

    while (bantu != NULL) {
        cout << bantu->data;
        if (bantu->next != NULL) {
            cout << " -> ";
        }
        bantu = bantu->next;
    }

    cout << endl;
}

int main() {
    int N, cari, nilaiBaru, angka;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> angka;
        tambah(angka);
    }

    cin >> cari;
    cin >> nilaiBaru;

    insertAfter(cari, nilaiBaru);
    tampilkan();

    return 0;
}