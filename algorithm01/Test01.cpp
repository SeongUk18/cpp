//N ������ �ڿ��� �߿��� 3�� ����ų� 5�� ����� ���� ��� ���� ���� ��ȯ�ϴ� �Լ�
//func1(int N)�� �ۼ��϶�. N�� 10�� ������ �ڿ����̴�.
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