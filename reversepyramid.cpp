#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=4;i>=1;i--){
		for(j=4;j>=i;j--){
			cout<<" ";
		}
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		for(j=i;j>1;j--){
			cout<<"*";
		}
		cout<<endl;
	}
}
