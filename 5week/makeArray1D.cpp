#include <iostream>
#include <cstdlib>
using namespace std;

int *makeArray1D(int *sz);
void destroyArray1D(int *arr, int *sz);

int main(int argc, char *argv[]){
    if(argc <2){
        cout << "usage : ./str  1d 2d 3d... nd\n";
        return -1;
    }

    int i, dim = argc-1;
    int *size = new int [dim];

    for(i = 1; i<argc; i++) size[i-1] = atoi(argv[i]);

    int *arrld = NULL;

    arrld = makeArray1D(size);
    for (int i=0; i<size[0]; i++) arrld[i]=i;
    for (int i=0; i<size[0]; i++) cout << arrld[i] << " ";
    cout << endl;
    destroyArray1D(arrld, size);
    return 0;
}