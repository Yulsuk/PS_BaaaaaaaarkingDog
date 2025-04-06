#include <iostream>

using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a,b,c;
    cin >> a >> b >> c;

    ll val = 1;
    while(b > 0){
        if(b % 2 == 1){
            val = val * a % c;
        }
        a = a * a % c;
        b = b/2;
    }
    

    cout << val;
}