#include "guided.h"

void createList(List &L) {
    L.First = nullptr;
}

Node* alokasi(string n, string w, int t) {
    Node* P = new Node;
    P->nopol = n;
    P->warna = w;
    P->tahun = t;
    P->next = nullptr;
    return P;
}

void insertLast(List &L, Node* P) {
    if (L.First == nullptr) {
        L.First = P;
    } else {
        Node* Q = L.First;

        while (Q->next != nullptr) {
            Q = Q->next;
        }

        Q->next = P;
    }
}

void cariData(List L, string n) {
    Node* P = L.First;

    while (P != nullptr && P->nopol != n) {
        P = P->next;
    }

    cout << "=== HASIL PENCARIAN ===" << endl;

    if (P != nullptr) {
        cout << "Nopol ditemukan : " << P->nopol << endl;
        cout << "Warna: " << P->warna << endl;
        cout << "Tahun: " << P->tahun << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }
}

void deleteAfter(List &L, string n) {
    Node* P = L.First;

    while (P != nullptr && P->nopol != n) {
        P = P->next;
    }

    if (P != nullptr && P->next != nullptr) {
        Node* Q = P->next;
        P->next = Q->next;
        delete Q;
    }
}

void tampilData(List L) {
    Node* P = L.First;

    while (P != nullptr) {
        cout << "Nopol : " << P->nopol << endl;
        cout << "Warna : " << P->warna << endl;
        cout << "Tahun : " << P->tahun << endl;
        cout << "--------------------" << endl;

        P = P->next;
    }
}