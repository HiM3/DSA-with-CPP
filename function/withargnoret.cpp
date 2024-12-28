#include<iostream>
using namespace std;
int fun(int x,int y){
	cout<<"Addition of a & b: "<<(x+y);
}
int main(){
	int a,b;
	cout<<"Enter the no.";
	cin>>a>>b;
	fun(a,b);
}
