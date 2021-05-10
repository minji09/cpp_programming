#include <iostream>
#include "Kvector.h"
using namespace std;


bool operator==(const Kvector& lhs, const Kvector &rhs){
    if(lhs.len!=rhs.len) return false;
    for(int i =0; i< lhs.len; i++){
        if(lhs.m[i] != rhs.m[i]) return false;
    }
    return true;
}
bool operator!=(const Kvector& lhs, const Kvector& rhs){
    return !(lhs == rhs);
}

int& Kvector::operator[](int idx){
    return m[idx];
}

const int& Kvector::operator[] (int idx) const {
    return m[idx];
}

ostream& operator<<(ostream& os, const Kvector& v){
    for (int i =0; i< v.len; i++){
        os << v.m[i] << " ";
    }
    return os;
}

Kvector& Kvector::operator=(const Kvector& rhs){
    if( this != &rhs){
        delete[] m;
        m = nullptr;
        m = new int[rhs.len];
        len = rhs.len;
        copy(rhs.m, rhs.m + len, m);
    }
    return *this;
}

Kvector::Kvector(const int sz, const int value){
    len = sz;
    if(len == 0) m = nullptr;
    else m = new int[len];
    for(int i=0; i<len; i++){
        m[i] = value;
    }
    cout << this << " : Kvector(" << sz << ", " << value << ")"<< endl;
    total_len += len;

}

Kvector::Kvector(const Kvector& v){
    len = v.len;
    m = new int[len];
    for(int i =0; i <len; i++){
        m[i] = v.m[i];
    }
    cout << this << " : Kvector(" << &v << ") \n";
    total_len += len;
}
int Kvector::total_len = 0;

