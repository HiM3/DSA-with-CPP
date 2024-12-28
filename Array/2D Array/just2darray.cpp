#include <iostream>
using namespace std;
int main() {
    int arr[10][10], i, j;
    cout << "Enter elements of the array (3x3):" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "Elements of the array:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

