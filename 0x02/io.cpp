#include <iostream>

using namespace std;

void func_getline(){
    //공백 포함 문자열
    string s;
    cout << "input : ";
    getline(cin, s);
    cout << s;
}

void io_test(){
    for(int i = 0; i < 10000; i++){
        cout << "test " << i << '\n';
    }
}

int main(){
    //func_getline();
    ios::sync_with_stdio(0);
    io_test();

    return 0;
}