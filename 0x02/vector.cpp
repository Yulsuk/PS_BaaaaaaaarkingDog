#include <iostream>
#include <vector>

using namespace std;

//call by value
void func1(vector<int> v){
    v[10] = 7;
}

//O(N) : 벡터 전체를 복사해야하기 때문
bool cmp1(vector<int> v1, vector<int> v2, int idx){
    return v1[idx] > v2[idx];
}

//O(1) : 주소정보만 넘어가기 때문
bool cmp2(vector<int>& v1, vector<int>& v2, int idx){
    return v1[idx] > v2[idx];
}

int main(){
    vector<int> v(100);
    func1(v);
    cout << v[10];

    return 0;
}