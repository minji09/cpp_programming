#include <iostream>
using namespace std;

class Kvector{
    int *m;
    int len;
public:
    Kvector(const int sz =0, const int value = 0);
    Kvector(const Kvector& v);
    ~Kvector(){
        total_len -= len;
        cout << this << " : ~Kvector () \n";
        delete[] m;
    }
    void print() const {
        for (int i =0; i<len; i++) cout << m[i] << " ";
        cout << endl;
    }
    void clear() {
        total_len -= len;
        delete[] m;
        m = NULL;
        len = 0;
    }
    int size() { return len;}
    static int total_len;
    friend bool operator==(const Kvector& lhs, const Kvector& rhs);
    friend bool operator!=(const Kvector& lhs, const Kvector& rhs);
    Kvector& operator=(const Kvector& rhs);
    int& operator[](int idx);
    // int function(const Kvector& v);
    friend ostream& operator<<(ostream& os, const Kvector& v);
};

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


int main(){
    Kvector v1(3); v1.print();
    Kvector v2(2,9); v2.print();
    Kvector v3(v2); v3.print();
    cout << (v1 == v2) << endl;
    cout << (v3 == v2) << endl;
    v3 = v2 = v1;
    cout << v1 << endl;
    cout << v2 << endl;
    cout << v3 << endl;
    cout << (v3 != v2) << endl;
    v1[2] = 2;
    v2[0] = v1[2];
    cout << "v1: " << v1 << "v2: " << v2 << "v3: " << v3 << endl;
    return 0;
}