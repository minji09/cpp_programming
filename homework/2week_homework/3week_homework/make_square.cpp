#include <iostream>
#include <cmath>
using namespace std;

int distance(int i, int j, int a);

int main(){
    int x1,y1,x2,y2,a,b;
    cin >> x1 >> y1 >> x2 >> y2 ;
    cin >> a >> b;
    
    bool x_scope ;
    bool y_scope ;

    if (x1<=a && a<=x2)
        x_scope = true;
    if (y1<=b && b<=y2)
        y_scope = true;


    if (x_scope == true && y_scope == true){
        cout << 0 << " " << 0;
    }
    else{
        if(x_scope == true && y_scope == false){
            int d_y=distance(y1,y2,b);
            int euc_distance = pow(d_y,2);
            int rec_distance = d_y;
            cout << euc_distance << " " << rec_distance;
        }
        else if(x_scope == false && y_scope == true){
            int d_x=distance(x1,x2,a);
            int euc_distance = pow(d_x,2);
            int rec_distance = d_x;
            cout << euc_distance << " " << rec_distance;
        }
        else if (x_scope == false && y_scope == false){
            int d_x=distance(x1,x2,a);
            int d_y=distance(y1,y2,b);
            int euc_distance = pow(d_x,2)+pow(d_y,2);
            int rec_distance = d_x+d_y;
            cout << euc_distance << " " << rec_distance;
        }
        
    }
    return 0;
}

    int distance(int i, int j, int k) {
        if(k>j){
            return abs(k-j);
        }
        else{
            return abs(i-k);
        }
    }
    


