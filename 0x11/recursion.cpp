#include <iostream>

using namespace std;

//a^b 를 m 모듈러 연산하면서 나머지 구하기
long long func1(long long a, long long b, long long m){
    long long val = 1;
    while(b--){
        val = val * a % m;
    }
    return val;
}

//a^b 구한 후 m 모듈러 연산으로 나머지 구하기
int func2(int a, int b, int m){
    int val = 1;
    while(b--){
        val = val * a;
    }
    return val % m;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //둘다 답은 1이 되어야하지만, func2 는 오버플로우로 인해 잘못된 값 출력
    cout << func1(6,50,5);
    cout << '\n';
    cout << func2(6,50,5);
}