//N�� �������̸� 1�� ��ȯ�ϰ� �������� �ƴϸ� 0�� ��ȯ�ϴ� �Լ�
//func3(int N)�� �ۼ��϶�. N�� 10�� ������ �ڿ����̴�.
#include<iostream>
using namespace std;

//�ð� ���⵵ O(rootN)
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