//�־��� ���� N�� int�迭 arr���� ���� 100�� ���δٸ� ��ü�� �ο��Ұ� �����ϸ� 1��,
//�������� ������ 0�� ��ȯ�ϴ� �Լ� func2(int arr[],int N)�� �ۼ��϶�.
//arr�� �� ���� 0�̻� 100�����̰� N�� 1000�����̴�.
#include<iostream>
using namespace std;

//�ð� ���⵵ 0(N^2)
int func2(int arr[], int N) {
	for (int i = 0; i < N-1; i++) {
		for (int j = i + 1; j < N; j++) {
			if ((arr[i] + arr[j]) == 100) {
				return 1;
			}
		}
	}
	return 0;
}

int main() {

	int arr1[] = {1,52,48 };
	int arr2[] = { 50,42 };
	int arr3[] = { 4,13,63,87 };

	cout << func2(arr1, 3) << func2(arr2, 2) << func2(arr3, 4) << endl;

	return 0;
}