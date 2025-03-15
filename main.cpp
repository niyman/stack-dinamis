//main.cpp

#include "Stack.cpp"

int main()
{
    Stack L;
    address p;
    createStack(L);
    push(L, alokasi(3));
    push(L, alokasi(2));
    pop(L, p);
    push(L, alokasi(4));
    push(L, alokasi(6));
    pop(L, p);
    push(L, alokasi(8));
    push(L, alokasi(2));
    pop(L, p);
    push(L, alokasi(9));
    
    viewStack(L);
    cout<< " "<<endl;
    return 0;
}
