#include <iostream>
#include <string>
#include <cmath>
#include <bitset>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    int cnt = 0;
    string s = bitset<31>(n).to_string();
    for (int i = 0; i<32; i++){

        if(s[i]=='1') cnt+=1;
    }


    if (cnt%2) s = "1" + s; // 홀수
    else s = "0" + s; // 짝수

    //cout << s << endl;
    
    unsigned int a = 0;
    for (int i = 0; i < 32; i++){

        if(s[i] == '1') a += pow(2, 31 - i);
    }
    cout << a << endl;

    return 0;
}