#include<iostream>
using namespace std;
int main() {
	int arr[10],i,j,p;
	cout<<"Enter elements in the array: ";
	for(i=0; i<=5; i++) {
		cin>>arr[i];
	}
	cout<<"Enter the element: ";
	cin>>p;
	for(i=0; i<=arr[i]; i++) {
		if(p==arr[i]) {
			j=i;
			cout<<"element is found is on the index "<<i<<endl;
		}
	}
	cout<<"element is found is on the index "<<j;
}
