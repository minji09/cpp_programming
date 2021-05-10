#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int **left;
    int **right;
    left = new int*[n];
    right = new int*[n];
    for(int i =0; i<n; i++){
        left[i] = new int[n];
        right[i] = new int [n];
    }

    for (int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            cin >> left[i][j];
            right[i][n-j-1] = left[i][j];
        }
    }

    int sum =0;
    for(int i =0; i<n-1; i++){
        if (i==0){
            int line_sum = 0;
            for (int j=0; j<n; j++){
                line_sum += left[j][j];
            }
            sum = max(sum, line_sum);
        }
        else {
            int top =0;
            int bottom =0;
            int j =1;
            while(i-j>=0){
                top += left[i-j][n-j];
                j++;
            }
            int k=i;
            for (int k=i;k<n; k++){
                bottom += left[k][k-i];
            }

            sum = max(sum, top+bottom);
        }
    }


    for(int i =0; i<n-1; i++){
        if (i==0){
            int line_sum = 0;
            for (int j=0; j<n; j++){
                line_sum += right[j][j];
            }
            sum = max(sum, line_sum);
        }
        else {
            int top =0;
            int bottom =0;
            int j =1;
            while(i-j>=0){
                top += right[i-j][n-j];
                j++;
            }
            int k=i;
            for (int k=i;k<n; k++){
                bottom += right[k][k-i];
            }

            sum = max(sum, top+bottom);
        }

    }
    cout << sum;
    for (int i = 0; i < n; i++){
		delete [] left[i];
        delete [] right[i];
    }
	delete [] left;
    delete [] right;



    return 0;
}