#ifndef TITIK_H
#define TITIK_H

struct Titik {
    float x;
    float y;
};

// Deklarasi prototipe fungsi agar dapat dikenali di main.cpp
void inputTitik(Titik &t);
void tampilTitik(Titik t);
float hitungJarak(Titik t1, Titik t2);

#endif