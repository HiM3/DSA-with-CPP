#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=i;j<=5;j++){
			cout<<j;
		}
		cout<<endl;
	}
	
	int count=0;
	for(i=1;i<=5;i++){
		for(j=1;j<=6-i;j++){
			cout<<j+count;
		}
		count++;
		cout<<endl;
	}
}
