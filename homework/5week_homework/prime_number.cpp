#include <iostream>
#include <cmath>
using namespace std;

//prime_number : 1

void check(int n){
    bool isPrime = true;
    if(n<=1){
        isPrime = false;
    }

    for (int i=2; i<=sqrt(n); i++){
        if((n%i)==0)
            isPrime = false;
    }
    if (isPrime) cout << 1 << endl;
    else cout << 0 << endl;
}


int main(){

    int n;
    cin >> n;
   
    check(n);

    return 0;
}