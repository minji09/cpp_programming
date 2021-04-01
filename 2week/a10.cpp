#include <iostream>
using namespace std;

int main(){

    char arr[10];
    int i;

    for (i=0; i<5; i++){
        arr[i]='a';
    }

    for(i=0;i<5;i++){
        cout << arr[i] <<endl;
    }

    return 0;
}