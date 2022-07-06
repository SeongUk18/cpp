//N 이하의 자연수 중에서 3의 배수거나 5의 배수인 수를 모두 합한 값을 반환하는 함수
//func1(int N)을 작성하라. N은 10만 이하의 자연수이다.
#include<iostream>
using namespace std;

int func1(int n) {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	return sum;
}

int main() {

	cout<<func1(16)<<endl;
	cout<<func1(34567)<<endl;
	cout << func1(27639) << endl;

	return 0;
}