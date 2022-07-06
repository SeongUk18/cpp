//N이 제곱수이면 1을 반환하고 제곱수가 아니면 0을 반환하는 함수
//func3(int N)을 작성하라. N은 10억 이하의 자연수이다.
#include<iostream>
using namespace std;

//시간 복잡도 O(rootN)
int func3(int n) {

	for (int i = 0; i + i <= n; i++) {
		if ((i * i) == n)
			return 1;
	}
	return 0;
}

int main() {

	cout << func3(9) << func3(693953651) << func3(756580036);

	return 0;
}