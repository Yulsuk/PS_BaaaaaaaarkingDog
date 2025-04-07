#include <iostream>

using namespace std;

int z_order(int n, int x, int y) {
    if (n == 0) return 0;
    int half = 1 << (n-1);        //한 변의 길이의 절반(2^(n-1))
    int block_size = half * half; //한 블럭의 크기

    //4등분이 핵심..!
    
    if(x < half && y < half){           //1사분면
        return                     z_order(n-1, x, y);
    }else if(x < half && y >= half){    //2사분면
        return     block_size    + z_order(n-1, x, y-half);
    }else if(x >= half && y < half){    //3사분면
        return 2 * block_size    + z_order(n-1, x-half, y);
    }else if(x >= half && y >= half){   //4사분면
        return 3 * block_size    + z_order(n-1, x-half, y-half);
    }    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,r,c;
    cin >> n >> r >> c;
    cout << z_order(n,r,c);

}