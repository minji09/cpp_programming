#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//int 형 벡터 생성
vector<int>v;


//sum이 언젠가는 1이 되어야 happy
int main()
{
    int n, temp = 0;
    cin >> n;
    if (n == 1)
    {
        cout << "HAPPY" << endl;
        return 0;
    }

    temp = n;
    int sum = 0;
    while (1)
    {   //몫이 0이 될때까지 loop
        while (temp)
        {   
            //각 자릿 수 제곱의 합
            sum += (temp % 10) * (temp % 10);
            temp /= 10;
        }
        if (sum == 1)
        {
            cout << "HAPPY" << endl;
            return 0;
        }

        //누적되어있는 값들중에서 기존에 있었던 값인지확인
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == sum)
            {
                cout << "UNHAPPY" << endl;
                return 0;
            }
        }
        //재시작 // 벡터 마지막에 새로운 sum 값 추가
        v.push_back(sum);
        temp = sum;
        sum = 0;
    }
    
    
}
