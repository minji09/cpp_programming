#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#define TARGET 'e';

int main(int argc, char *argv[]){
    if (argc <2) {cout << "one command line argument needed\n"; return -1;}
    int n = strlen(argv[1]);
    char *a = new char[n*2+3];
    if (!a) {cout << "allocation failed.\n"; return -1;}
    a[0] = '!';
    int c = 1; //a[0]은 '!'이므로 a[1]부터 추가
    for (int i = 0; i<n; i++){
        //'e'를 찾으면 e를 두번 넣어주고 index값 2 추가
        if (argv[1][i]=='e'){
            a[c] = 'e';
            a[c+1] = 'e';
            c+=2;
        } 
        else {
            a[c] = argv[1][i];
            c+=1;
        }
    }
    //마지막 '.' 'null' 추가
    a[c] = '.';
    //a[c+1] = '\n';

    cout << a << endl;

    string s = "!";
    s+= argv[1];
    s+= ".";
    int pos = 0;
    while(1){
        pos = s.find('e', pos);
        if (pos > s.size()) break;
        s.insert(pos, "e");
        pos+=2;
    }


    //

    cout << s << endl;
}