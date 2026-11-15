
#include "soal1.h"

void createStack(Stack &S) {
    S.top = -1;
}

void push(Stack &S, infotype x) {
    if (S.top < 19) {
        S.top++;
        S.info[S.top] = x;
    } else {
        cout << "Stack penuh!" << endl;
    }
}

infotype pop(Stack &S) {
    if (S.top >= 0) {
        infotype x = S.info[S.top];
        S.top--;
        return x;
    }

    return -1;
}

void printInfo(Stack S) {
    cout << "[TOP] ";

    for (int i = S.top; i >= 0; i--) {
        cout << S.info[i] << " ";
    }

    cout << endl;
}

void balikStack(Stack &S) {
    Stack T;
    createStack(T);

    while (S.top >= 0) {
        push(T, pop(S));
    }

    S = T;
}

// SOAL 2
void pushAscending(Stack &S, infotype x) {
    Stack T;
    createStack(T);

    while (S.top >= 0 && S.info[S.top] > x) {
        push(T, pop(S));
    }

    push(S, x);

    while (T.top >= 0) {
        push(S, pop(T));
    }
}

// SOAL 3
void getInputStream(Stack &S) {
    char c;

    cout << "Masukkan angka: ";

    while (cin.get(c) && c != '\n') {
        if (c >= '0' && c <= '9') {
            push(S, c - '0');
        }
    }
}
