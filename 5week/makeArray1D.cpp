#include <iostream>
#include <cstdlib>
using namespace std;

//1차원 배열 만들어서 반환하기 

int *makeArray1D(int *sz);
void destroyArray1D(int *arr, int *sz);

//우선 1차원이므로 argc = 2
int main(int argc, char *argv[]){
    if(argc <2){
        cout << "usage : ./str  1d 2d 3d... nd\n";
        return -1;
    }

    //i, dim = 1;
    int i, dim = argc-1;


    int *size = new int [dim];

    for(i = 1; i<argc; i++) size[i-1] = atoi(argv[i]);

    int *arr1d = NULL;

    arr1d = makeArray1D(size);
    for (int i=0; i<size[0]; i++) arr1d[i]=i;
    for (int i=0; i<size[0]; i++) cout << arr1d[i] << " ";
    cout << endl;
    destroyArray1D(arr1d, size);
    return 0;
}

int *makeArray1D (int *sz){
    int n = sz[0];
    int *arr = new int[n];
    return arr;
}

void destroyArray1D(int *arr, int *sz){
    delete[] arr;
}