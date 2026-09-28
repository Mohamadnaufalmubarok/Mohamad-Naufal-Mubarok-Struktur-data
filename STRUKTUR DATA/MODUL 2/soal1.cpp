#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int nilai[100];
    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> nilai[i];
        total += nilai[i];
    }

    int rata = total / n;
    int atas = 0;

    for (int i = 0; i < n; i++) {
        if (nilai[i] > rata) {
            atas++;
        }
    }

    cout << "Rata-rata: " << rata << endl;
    cout << "Di atas rata-rata: " << atas << endl;

    return 0;
}