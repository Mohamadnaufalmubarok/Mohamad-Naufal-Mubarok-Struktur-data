
#include <iostream>
using namespace std;

// Prosedur menampilkan array 2D
void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

// Prosedur menukar isi dua array pada posisi tertentu
void tukarArray(int A[3][3], int B[3][3], int baris, int kolom) {
    int temp = A[baris][kolom];
    A[baris][kolom] = B[baris][kolom];
    B[baris][kolom] = temp;
}

// Prosedur menukar nilai melalui dua pointer
void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][3] = {
        {10, 11, 12},
        {13, 14, 15},
        {16, 17, 18}
    };

    int x = 100, y = 200;
    int *p1 = &x;
    int *p2 = &y;

    cout << "Array A:" << endl;
    tampilArray(A);

    cout << "\nArray B:" << endl;
    tampilArray(B);

    tukarArray(A, B, 1, 1);

    cout << "\nSetelah menukar posisi baris 2 kolom 2:" << endl;
    cout << "Array A:" << endl;
    tampilArray(A);

    cout << "\nArray B:" << endl;
    tampilArray(B);

    cout << "\nSebelum menukar pointer: " << *p1 << " dan " << *p2 << endl;
    tukarPointer(p1, p2);
    cout << "Sesudah menukar pointer: " << *p1 << " dan " << *p2 << endl;

    return 0;
}
