#include <iostream>

using namespace std;

//a^b 를 m 으로 나눈 나머지 구하기
long long func1(long long a, long long b, long long m){
    long long val = 1;
    while(b--){
        val = val * a % m;
    }
    return val;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << func1(6,100,5);
}