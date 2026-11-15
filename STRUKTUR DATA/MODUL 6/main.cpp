#include "guided.h"

int main() {
    List L;
    createList(L);

    insertLast(L, alokasi("D000", "Putih", 2021));
    insertLast(L, alokasi("D001", "Merah", 2022));
    insertLast(L, alokasi("D003", "Merah", 2022));
    insertLast(L, alokasi("D004", "Abu-abu", 2025));
    insertLast(L, alokasi("D002", "Hitam", 2023));

    cariData(L, "D001");

    cout << endl;
    cout << "=== DATA SETELAH DELETE AFTER D001 ===" << endl;

    deleteAfter(L, "D001");
    tampilData(L);

    return 0;
}