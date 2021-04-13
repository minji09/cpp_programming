#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;


int main(){

    int n;
    cin >> n;
    vector<unsigned int> v = {1,2,3,5};
	vector<int> s = {2,3,5};


	unsigned int k=0;
	while(v.size()<=5000){
		int m = v.size();
		for (int i = 0; i<m; i++){
			for (int j = 0; j<3; j++){
				k = v[i]*s[j];
				v.push_back(k);
			}
		}
		sort(v.begin(),v.end());
		v.erase(unique(v.begin(),v.end()),v.end());

	}
	cout <<v[n-1];
	

    return 0;
}