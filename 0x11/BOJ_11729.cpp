#include <iostream>

using namespace std;

void hanoi(int a, int b, int n){
    //한개면 바로 옮기면 됨
    if(n == 1){
        cout << a << ' ' << b << '\n';
        return;
    }
    //
    hanoi(a, 6-a-b, n-1);
    cout << a << ' ' << b << '\n';
    hanoi(6-a-b, b, n-1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    cout << (1<<n) - 1 << '\n'; //옮기는 최소 횟수 2^n - 1
    hanoi(1,3,n);
}