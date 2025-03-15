//Stack.h

#ifndef Stack_H_INCLUDED
#define Stack_H_INCLUDED
#include <iostream>

//definisi perintah
#define Nil NULL
#define info(p) p->info //ngambil data
#define next(p) p->next //ambil alamat
#define top(L) L.top // ambil alamat

using namespace std;
/*
    Type infotype : integer
    Type address  : pointer to ElmStack
    Type ElmStack <
	    info : infotype
	    next : address
    >
    Type Stack : < top : address >
*/

// definisi untuk data dan pointer address
typedef int infotype;
typedef struct ElmStack *address;

// definisi struktur dari element
struct ElmStack{
    infotype info;
    address next;
};

// definisi Stack
struct Stack{
    address top;
};

// deklarasi prosedur
void createStack(Stack &L);
/*  I.S. Sembarang Stack
    F.S. terbentuk Stack kosong */


address alokasi(infotype data);//membuat elemen baru
/*  I.S. terdefinisi suatu data yang akan dialokasikan ke memori
    F.S. mengaklokasikan P yang menunjuk pada element baru */

void viewStack(Stack L);
/*  I.S. Sembarang Stack
    F.S. menampilkan isi dari Stack */

void dealokasi(address &P);
/*  I.S. Element P
    F.S. element P dealokasi */

// void reverseStack(Stack &L);

// void push(Stack &L, infotype P)


#endif // SINGLELINKEDStack_H_INCLUDED