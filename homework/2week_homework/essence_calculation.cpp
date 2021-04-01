#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;

    cin>>a;
    cin>>b;

    if (a>=b)
        c=a;
    else    
        c=b;

    if (a==b)
        d=1;
    else
        d=0;

    cout<< a+b << " " << a-b<< " " << abs(a-b) <<" "<< a*b<< " ";
    cout << a/b << " "<< a%b <<" "<< c <<" "<< d << endl;


    return 0;
}