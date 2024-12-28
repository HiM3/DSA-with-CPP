#include<iostream>
using namespace std;
int main() {
	int i,j;
	for(i=1; i<=10; i++) {
		for(j=1; j<=i; j++) {
			if(i==1 || j==1 || i==10 || j==i) {
				cout<<"*";
			} else {
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
