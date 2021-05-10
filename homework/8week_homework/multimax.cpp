#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int a, int b){
    return a>b;
}

int main(){

    int n;
    cin >> n;

    int *arr = new int[n];

    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n, desc);

    int k;
    if(arr[0]>= 0 && arr[1]>=0 && arr[2]>=0){
        k = arr[0]*arr[1]*arr[2];
        k = max(k, arr[0]*arr[1]);
        k = max(k, arr[0]*arr[n-1]*arr[n-2]);
    }
    else if (arr[0]>=0 && arr[1]>=0 && arr[2]<0){
        k = arr[0]*arr[1];
        k = max(k, arr[0]*arr[n-1]*arr[n-2]);
        k = max(k, arr[n-1]*arr[n-2]);
    }
    else if (arr[0]>=0 && arr[1]<0 && arr[2]<0){
        k = arr[0] * arr[1] * arr[2];
        k = max(k, arr[0]*arr[n-1]*arr[n-2]);
        k = max(k, arr[n-1]*arr[n-2]);
    }
    else {
        k = arr[n-1]* arr[n-2];
    }

    cout << k;



    delete [] arr;
    return 0;
}