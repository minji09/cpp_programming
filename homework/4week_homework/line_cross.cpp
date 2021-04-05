#include <iostream>
#include <cmath>
using namespace std;

void compare(int, int, int, int, int, int, int, int);

int main(){
    
    int hx1,hy1,hx2,hy2,vx1,vy1,vx2,vy2;
    cin >> vx1>>vy1>>vx2>>vy2; //differenct x
    cin >> hx1>>hy1>>hx2>>hy2; //different y

    if(vx1!=vx2){
        compare(hx1,hy1,hx2,hy2,vx1,vy1,vx2,vy2);
    }
    else{
        compare(vx1,vy1,vx2,vy2,hx1,hy1,hx2,hy2);
    }

    
    

    return 0;
}

void compare(int vx1, int vy1, int vx2, int vy2, int hx1, int hy1, int hx2, int hy2){
    
    int max_hx = max(hx1,hx2);
    int min_hx = min(hx1,hx2);
    int max_vy = max(vy1,vy2);
    int min_vy = min(vy1,vy2);
    // int max_vx = max(vx1,vx2);
    // int min_vx = min(vx1,vx2);

    if (min_hx<vx1 && vx1<max_hx){
        if ( min_vy< hy1 && hy1<max_vy){
            cout << 1;
        }
        else if (hy1 == min_vy || hy1 == max_vy ){
            cout << 2;
        }
        else{
            cout <<0;
        }
    }
    else if (min_vy<hy1 && hy1<max_vy){
        if(min_hx<vx1 && vx1<max_hx){
            cout << 1;
        }
        else if(vx1 == min_hx || vx1 == max_hx){
            cout << 2;
        }
        else{
            cout <<0;
        }
    }
    else if(min_hx==vx1 || max_hx==vx1){
        cout << 2;
    }
    else if(max_vy==hy1 || min_vy==hy1){
        cout << 2;
    } 

    else{
        cout << 0;
    }

}
