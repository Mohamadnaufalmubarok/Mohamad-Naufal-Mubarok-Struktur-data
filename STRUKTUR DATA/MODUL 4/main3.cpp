
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

int hitungSum() {
    int sum = 0;
    Node* bantu = head;

    while (bantu != NULL) {
        sum += bantu->data;
        bantu = bantu->next;
    }

    return sum;
}

int main() {
    int N, angka;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> angka;
        tambah(angka);
    }

    cout << hitungSum() << endl;

    return 0;
}
