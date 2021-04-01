#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int ax,ay,bx,by,cx,cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;

    float x = sqrt(pow((bx-ax),2)+pow((by-ay),2));
    float y = sqrt(pow((cx-bx),2)+pow((cy-by),2));
    float z = sqrt(pow((cx-ax),2)+pow((cy-ay),2));

    if (x+y <= z || y+z<=x || z+x<=y){
        cout << 0;
    }
    else{
        if(x*x+y*y == z*z || y*y+z*z==x*x || z*z+x*x==y*y){
            cout << 1;
        }
        else if(x*x+y*y < z*z || y*y+z*z<x*x || z*z+x*x<y*y){
            cout << 2;
        }
        else{
            cout <<3;
        }
    }
    

    return 0;
}