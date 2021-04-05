#include <iostream>
using namespace std;

int main(){
    

    int k;
    int col = 0;
    cin>> k;
    for (int i = 1; i<=k; i++){
        for ( int j=1 ; j<=i; j++ ){
            col += 1;
            cout << col << " " ;
        }
        cout << "\n";
    }

    return 0;
}