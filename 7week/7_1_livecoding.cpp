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
};

Kvector::Kvector(const int sz, const int value){
    len = sz;
    if(len == 0) m = nullptr;
    else m = new int[len];
    for(int i=0; i<len; i++){
        m[i] = value;
    }
    cout << this << " : Kvector(*" << sz << ", " << value << ")"<< endl;
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
    const Kvector v2(2,9); v2.print();
    Kvector v3(v2); v3.print();
    cout << "total length = " << Kvector::total_len << endl;
    v2.print();
    v3.print();
    cout << "total length = " << Kvector::total_len << endl;
    return 0;
}