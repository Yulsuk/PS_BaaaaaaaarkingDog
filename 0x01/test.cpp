#include <iostream>
#include <cmath>
using namespace std;

//N 이하의 자연수 중에서 3의 배수이거나 5의 배수인 수를 모두 합한 값을
//반환하는 함수 func1(int N)을 작성하라.
//N은 5만 이하의 자연수이다.
int func1(int N){
    if(N==1){
        return 1;
    }
    int ans = 0;
    for(int i = 2; i <= N; i++){
        if(i % 3 == 0 || i % 5 == 0){
            ans += i;
        }
    }
    return ans;
}

void test1(){
    cout << func1(16) << endl;
    cout << func1(34567) << endl;
    cout << func1(27639) << endl;
}

//주어진 길이 N의 int 배열 arr에서 합이 100인 서로 다른 위치의 두 원소가
//존재하면 1을, 존재하지 않으면 0을 반환하는 함수
//func2(int arr[], int N)을 작성하라.
//arr의 각 수는 0 이상 100이하이고 N은 1000이하이다.
int func2(int arr[], int N){
    for(int i = 0; i < N-1; i++){
        for(int j = i+1; j < N; j++){
            if(arr[i]+arr[j] == 100){
                return 1;
            }
        }
    }
    return 0;
}

void test2(){
    int arr1[] = {1, 52, 48};
    int arr_size1 = sizeof(arr1) / sizeof(int);
    cout << func2(arr1, arr_size1) << endl;
    
    int arr2[] = {50, 42};
    int arr_size2 = sizeof(arr2) / sizeof(int);
    cout << func2(arr2, arr_size2) << endl;
    
    int arr3[] = {4, 13, 63, 87};
    int arr_size3 = sizeof(arr3) / sizeof(int);
    cout << func2(arr3, arr_size3) << endl;
}

//N이 제곱수이면 1을 반환하고 제곱수가 아니면 0을 반환하는 함수 func3(int N)
//을 작성하라. N은 10억 이하의 자연수이다.

int func3(int N){
    for(int i = 1; i <= N; i++){
        if(i*i == N){
            return 1;
        }
    }
    return 0;
}

void test3(){
    cout << func3(9) << endl;
    cout << func3(693953651) << endl;
    cout << func3(756580036) << endl;
}

//N이하의 수 중에서 가장 큰 2의 거듭제곱수를 반환하는 함수
//func4(int N)을 작성하라. N은 10억 이하의 자연수이다.

int func4(int N){
    int power = 1;
    while(power * 2 <= N){
        power *= 2;
    }
    return power;
}

void test4(){
    cout << func4(5) << endl;
    cout << func4(97615282) << endl;
    cout << func4(1024) << endl;
}

int main(){
    //test1();
    //test2();
    //test3();
    test4();

    return 0;
}