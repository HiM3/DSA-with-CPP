#include<iostream>
using namespace std;
int main() {
	int i,j;
	for(i=1; i<=10; i++) {
		for(j=10; j>=i; j--) {
			cout<<" ";
		}
		for(j=1; j<=i; j++) {
			if(j==1 || i==10 || j==i) {
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		for(j=1; j<i; j++) {
			if(j==i-1 || i==10)
			{
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
