//주어진 길이 N의 int배열 arr에서 합이 100인 서로다른 위체의 두원소가 존재하면 1을,
//존재하지 않으면 0을 반환하는 함수 func2(int arr[],int N)을 작성하라.
//arr의 각 수는 0이상 100이하이고 N은 1000이하이다.
#include<iostream>
using namespace std;

//시간 복잡도 0(N^2)
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