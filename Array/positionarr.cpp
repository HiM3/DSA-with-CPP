#include <iostream>
using namespace std;
int main() {
	int arr[10], i, j = -1, p, index, a, size = 6,b;
	cout << "Enter 6 elements in the array: ";
	for (i = 0; i < size; i++) {
		cin >> arr[i];
	}
	index = 4;
	a = 50;
	for (i = size; i > index; i--) {
		arr[i] = arr[i - 1];
	}
	arr[index] = a;
	size++;
	cout << "Array after inserting 50 at index 4:" << endl;
	for (i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}
	cout << "Enter the element to search: ";
	cin >> p;

	for (i = 0; i < size; i++) {
		if (arr[i] == p) {
			j = i;
			cout << "Element is found at index " << i << endl;
			break;
		}
	}
	if (j == -1) {
		cout << "Element not found in the array." << endl;
	}
	cout<<"Enter the element to delete: ";
	cin>>b;
	for (i = b; i < size - 1; i++) {
		arr[i] = arr[i + 1];
	}
	size--;
	cout << "Array after deleting element at index 3:" << endl;
	for (i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}
