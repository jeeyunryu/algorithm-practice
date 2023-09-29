#include <iostream>

using namespace std;

int main() {
	int arr[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
	int i = 0, j = 0, min = 9999, idx = 0, temp = 0;

	for (i = 0; i < 9; i++) {
		min = 9999;
		for (j = i; j < 10; j++) {
			if (arr[j] < min) {
				min = arr[j];
				idx = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = temp;
		cout << arr[i] << " "; 
	}

	
}