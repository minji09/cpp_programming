#include <iostream>
using namespace std;

class Kvector{
protected:
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
    const int& operator[](int idx) const;
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

#define N 3
class Avector : public Kvector{
    char table[N];
public:
    Avector (int sz =0, int v= 0, const char *t = "abc") : Kvector(sz, v) {
        cout << this << " : Avector( " << sz << ", " << v <<", " << t <<") \n";
        for(int i =0; i<N; i++) table[i] = t[i];
    }
    void setTable(const char *t){
        for(int i =0; i<N; i++) table[i] = t[i];
    }
friend ostream& operator<<(ostream& os, const Avector& v);

};
ostream& operator<<(ostream& os, const Avector& v){
    for(int i =0; i<v.len; i++){
        os << v.table[v.m[i]%N] << " ";
    }
    return os;

}


