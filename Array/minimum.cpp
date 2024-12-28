#include<iostream>
using namespace std;
int main() {
	int i,min,arr[10];
	for(i=0; i<5; i++) {
		cin>>arr[i];
	}
	cout<<"Array Elements are :"<<endl;
	for(i=0; i<5; i++) {
		cout<<arr[i]<<",";
	}
	cout<<endl;
	min=arr[0];
	for(i=0; i<5; i++) {
		if(min>arr[i]) {
			min=arr[i];
		}
	}
	cout<<"Minimum no. of arr "<<min;
}
