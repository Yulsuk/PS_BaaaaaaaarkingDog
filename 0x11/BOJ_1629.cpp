#include <iostream>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a,b,c;
    cin >> a >> b >> c;

    ll val = 1;
    while(b--){
        val = val * a % c;
    }

    cout << val;
}