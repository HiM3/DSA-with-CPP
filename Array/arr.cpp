#include<iostream>
using namespace std;
int main() {
	int arr[] = {10,20,30,40,50,60,70,80,90},i;
	cout<<sizeof(arr)<<endl;
	int length=sizeof(arr)/sizeof(arr[0]);
	cout<<"Length of Array "<<length<<endl;
	for(i=0; i<length; i++) {
		cout<<arr[i]<<endl;
	}
//	for(int element:arr){
//		cout<<element;
//	}
}
