#include<iostream>
using namespace std;
int main() {
	int i,max,arr[10];
	for(i=0; i<5; i++) {
		cin>>arr[i];
	}
	cout<<"Array Elements are :"<<endl;
	for(i=0; i<5; i++) {
		cout<<arr[i]<<",";
	}
	cout<<endl;
	max=arr[0];
	for(i=0; i<5; i++) {
		if(max<arr[i]) {
			max=arr[i];
		}
	}
	cout<<"Maximum no. of arr "<<max;
}
