#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    // int arr[n];
    // int arr2[n];
    int *arr = new int[n];
    int *arr2 = new int[n];

    for(int i =0; i<n; i++){
        cin >> arr[i];
        arr2[i] = arr[i];
    }

    for (int time = 0; time<k; time++){
        // 변하는 시간마다 arr[] 세팅
        for (int i =0; i<n; i++){
            arr[i] = arr2[i];
        }
    
        for(int i =0; i<n; i++){
            int sum = 0;
            if(i == 0) sum+= arr[1];
            else if (i == n-1) sum += arr[n-2];
            else sum += arr[i-1]+arr[i+1];

            if (sum<3 && arr2[i]!=0) arr2[i] -= 1;
            else if (sum >7 && arr2[i]!=0) arr2[i] -=1;
            else if (sum >=4 && sum <=7){
                if (arr2[i]>=9) continue;
                arr2[i] +=1;
            }
            else if (sum=3) continue;

        }
    }

    for (int i =0; i<n; i++) cout << arr2[i]<< " ";

    delete[] arr;
    delete[] arr2;
    return 0;
}