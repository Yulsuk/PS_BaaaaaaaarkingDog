//https://www.acmicpc.net/problem/10808
#include <iostream>
using namespace std;
int main() {

	string word;
	cin >> word;

	int arr[26] = { 0, };

	//a의 ASCII 코드 = 97
	for (int i = 0; i < word.length(); i++) {
		arr[word[i]-97]++;
	}

	for (int e : arr) {
		cout << e << ' ';
	}

	return 0;
}