#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int H, W, N;
    cin>> H>>W>>N;
    
    int floor = N%H;
    int room_number = (N/H)+1;

    if (floor == 0){
        floor = H;
        room_number-=1;
    }

    if (room_number<10){
        cout << floor << "0" << room_number;
    }
    else{
        cout << floor << room_number;
    }
    return 0;

}