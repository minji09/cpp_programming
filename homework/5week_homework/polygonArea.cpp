#include <iostream>
#include <string>
#include <cmath>
#include <typeinfo>
using namespace std;

int main(){

    int n;
    cin >> n;
    int *x = new int [n];
    int *y = new int [n];
    for (int i=0; i<n; i++) cin >> x[i] >> y[i];
    
    int signedArea =0;
    int area;

    for (int i = 0; i<n; i++) {
        if(i+1 == n) signedArea += (x[i]+x[0])*(y[0]-y[i]);
        else signedArea += (x[i]+x[i+1])*(y[i+1]-y[i]);
    }
    
    area = abs(signedArea);
    
    int check;
    if (signedArea <0) check=-1;
    else check = 1;

    cout << area <<" "<< check << endl;



    return 0;
}