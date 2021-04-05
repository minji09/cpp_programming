#include <iostream>
#include <cmath>
using namespace std;

/*삼각형면적구하기 + 
삼각형 면적 양수(반시계) : 1 / 음수(시계) : -1 / 0 : 0
*/

int main(){
    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by>> cx >> cy ;

    int signedArea, area;
    int check;

    signedArea = ((bx-ax)*(cy-ay)-(cx-ax)*(by-ay))/2;
    area = 2 * abs(signedArea);

    if (signedArea<0) check = -1;
    else if (signedArea>0) check = 1;
    else check = 0;

    cout << area << " " << check << endl;

    return 0;
}