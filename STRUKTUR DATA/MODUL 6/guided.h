#ifndef GUIDED_H
#define GUIDED_H

#include <iostream>
#include <string>
using namespace std;

struct Node {
    string nopol;
    string warna;
    int tahun;
    Node* next;
};

struct List {
    Node* First;
};

void createList(List &L);
Node* alokasi(string n, string w, int t);
void insertLast(List &L, Node* P);
void cariData(List L, string n);
void deleteAfter(List &L, string n);
void tampilData(List L);

#endif