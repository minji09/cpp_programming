#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a = 400;
    int b = 300;
    int n = 500;
    int w = 180150;
    if ((w-b*n)%(a-b)!=0) cout << -1 << endl;
    //int x = (w-b*n)/(a-b);
    else cout << 1 << endl;


    return 0;
}