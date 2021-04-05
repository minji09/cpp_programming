#include <iostream>
using namespace std;

int main(){
    
    int a;
    cin >> a;
    int m = a-1;

    for (int i=0; i<a; i++){
        for (int j=0; j<a; j++){
            
            if (j == (a/2)){
                
                if (i == (a/2) ){
                    cout << "O";
                }
    
                else {
                    cout << "I";
                }
                
            }
            else if (i == (a/2)){
                cout << "+";
            }


            else if(j == m){
                cout << "*";
                if (i == (a/2))
                    continue;
                //m-=1;
            }
            else{
                cout << ".";
            }
            
        }
        cout << "\n";
        m-=1;

    }

    return 0;
}