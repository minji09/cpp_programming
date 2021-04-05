#include <iostream>
#include <cmath>
using namespace std;

//양은 a그램, 염소는 b그램

int main(){
    
    int a, b, n, w;
    cin >> a >> b >> n >> w;

    if (a == b) cout << -1 << endl;
    else{ 
        
        if ((w-b*n)%(a-b)!=0) cout << -1 << endl;
        else {
            int x = (w-b*n)/(a-b);
            int y = n - x;

            if (x<=0 || y<=0) cout << -1 << endl;
            else cout << x << " " << y << endl;
        }
    }
    return 0;
}