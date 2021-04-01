#include <iostream>
#include <cstdlib>
using namespace std;

void random_num (int n){
    srand(n);
    for(int i=0; i<10; i++){
        int dice = rand()%6 +1;
        cout << dice << " ";
    }
    cout << endl;
}

int main(int argc, char *argv[])
{
    if(argc != 2){
        cout << "usage: ./dice n\n";
        return -1;
    }

    int n = atoi(argv[1]);
    random_num(n);
    return 0;
}
