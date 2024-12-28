#include<iostream>
using namespace std;
int main(){
	int i,j,count=0;
	for(i=1;i<10;i++){
		for(j=1;j<=i;j++){
			cout<<j+count;
		}
		count++;
		cout<<endl;
	}
}
