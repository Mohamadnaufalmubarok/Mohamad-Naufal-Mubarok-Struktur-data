
#include "soal1.h"

int main() {

    // SOAL 1
    cout << "===== SOAL 1 =====" << endl;

    Stack S;
    createStack(S);

    push(S, 3);
    push(S, 4);
    push(S, 8);
    pop(S);
    push(S, 2);
    push(S, 3);
    pop(S);
    push(S, 9);

    printInfo(S);

    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);


    // SOAL 2
    cout << endl;
    cout << "===== SOAL 2 =====" << endl;

    Stack A;
    createStack(A);

    pushAscending(A, 3);
    pushAscending(A, 4);
    pushAscending(A, 8);
    pushAscending(A, 2);
    pushAscending(A, 3);
    pushAscending(A, 9);

    printInfo(A);

    cout << "balik stack" << endl;
    balikStack(A);
    printInfo(A);


    // SOAL 3
    cout << endl;
    cout << "===== SOAL 3 =====" << endl;

    Stack B;
    createStack(B);

    getInputStream(B);

    printInfo(B);

    cout << "balik stack" << endl;
    balikStack(B);
    printInfo(B);

    return 0;
}
