#include<iostream>
using namespace std;
int fun(int x,int y){
	cout<<"Addition of a & b: ";
	return x+y;
}
int main(){
	int a,b;
	cout<<"Enter the no.";
	cin>>a>>b;
	cout<<fun(a,b);
}
