#include <iostream>
#include "BitSet.h"
using namespace std;

BitSet::BitSet(int sz) : Bvector(sz){}
void BitSet::insert(int v){
    set(v);
}
BitSet operator+(const BitSet& v1, const BitSet& v2){
    BitSet max_v3(max(v1.NBITS, v2.NBITS));
    for (int i=0; i<max_v3.NBITS; i++){
        if(v1.bit(i) || v2.bit(i)) max_v3.set(i);
    }
    return max_v3;
}
ostream& operator<<(ostream& os, const BitSet& s){
    os << "{ ";
    for (int i =0; i<s.NBITS; i++){
        if(s.bit(i)) os << i << " ";
    }
    os << "}";
    return os;
}



int main(int argc, char *argv[]){
    BitSet b1(131), b2(131);
    b1.insert(3); b1.insert(5); b1.insert(8);
    b2.insert(4); b2.insert(5); b2.insert(8); b2.insert(130);
    b1.print(); b2.print();
    cout <<"b1= " << b1 << endl;
    cout <<"b2= " << b2 << endl;
    cout <<"b1+b2= " << b1+b2 << endl;
    return 0;
}