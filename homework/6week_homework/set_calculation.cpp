#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;




int main(){
	int a,b;
	cin >> a;
	vector<int> v1(a);
	for (int i = 0; i< a; i++) cin >> v1[i];
	cin >> b;

	//크기 할당한 벡터 생성
	vector<int> v2(b);
	for (int i = 0; i< b; i++) cin >> v2[i];
	
	//정렬
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());

	//교집합
	//벡터 생성
	vector<int> inter_vec;
	//공간 확보
	inter_vec.resize(v1.size()+v2.size());
	auto i1 = set_intersection(v1.begin(),v1.end(), v2.begin(), v2.end(), inter_vec.begin());
	//남은 공간 제거
	inter_vec.erase(i1,inter_vec.end());

	//벡터의 크기 반환
	cout << inter_vec.size() << " ";
	
	for (int i = 0; i<inter_vec.size(); i++){
		cout << inter_vec[i] << " ";
	}
	cout << endl;


	vector<int> union_vec;
	union_vec.resize(v1.size()+v2.size());
	auto i2 = set_union(v1.begin(),v1.end(), v2.begin(), v2.end(), union_vec.begin());
	union_vec.erase(i2,union_vec.end());
	cout << union_vec.size() << " ";
	for (int i = 0; i<union_vec.size(); i++){
		cout << union_vec[i] << " ";
	}
	cout << endl;

	vector<int> diff_vec;
	diff_vec.resize(v1.size()+v2.size());
	auto i3 = set_difference(v1.begin(),v1.end(), v2.begin(), v2.end(), diff_vec.begin());
	diff_vec.erase(i3,diff_vec.end());
	cout << diff_vec.size() << " ";
	for (int i = 0; i<diff_vec.size(); i++){
		cout << diff_vec[i] << " ";
	}
	cout << endl;

	return 0;
}