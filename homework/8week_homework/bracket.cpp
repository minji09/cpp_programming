#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){

    stack<char> s;
    string c;

    getline(cin, c);
    for(int i=0; i<c.size(); i++){
        if(c[i] == ')'){
            if(s.empty()) {
                cout << 1 << endl;
                return -1;
            }
            else if (c[i] == ')' && s.top() =='(') {
                s.pop();
                continue;
            }
        }
        s.push(c[i]);
    }
    if(!s.empty()) {
        cout << 0 << endl;
        return -1;
    }

    cout << 1 << endl;

    return 0;
}