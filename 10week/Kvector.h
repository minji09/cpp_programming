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
