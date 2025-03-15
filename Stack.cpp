//Stack.cpp

#include "Stack.h"

void createStack(Stack &L)
{
    top(L) = Nil;
}
address alokasi(infotype data) //membuat elemen baru
{
    address P;
    P=new ElmStack;
    info(P)=data;
    next(P)=NULL;
    return P;
}
void push(Stack &L, address P){
    if (top(L)==NULL){
        top(L)=P;
    }else{
        // Stack ada isinya
        next(P)=top(L);
        top(L)=P;
    }
}

void pop(Stack &L, address &P) {
    if (top(L) != Nil) {
    P = top(L);
    top(L) = next(top(L));
    next(P) = Nil;
    dealokasi(P);
    }
}

void viewStack(Stack L)
{
    address q = top(L);
    do
    {
        cout<<info(q)<<" ";
        q=next(q);
    }
    while(q!=Nil);
}
void dealokasi(address &P)
{
    delete P;
}

// void reverseStack(address &P){
// 	Stack temp;
// 	createStack(temp);
// 	if(top(L)<0){
// 		cout<<"stack kosong rev\n";
// 	}else{
// 		while(top(L)>= 0){
// 			push(temp,pop(L));
// 		}
// 		L=temp;
// 	}
// }