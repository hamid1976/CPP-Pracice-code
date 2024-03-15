#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	
	cout<<"Enter 1st Marks:";
	cin>>a;
	
	cout<<"Enter 2nd Marks:";
	cin>>b;
	
	cout<<"Enter 3rd Marks:";
	cin>>c;
	
	if(a>b&& a>c){
		cout<<"1st Value Is Greater";
	}
	if(b>a&& b>c){
		cout<<"2nd Value Is Greater";
	}
	if(c>a&& c>b){
		cout<<"3rd Value Is Greater";
	}
	
	return 0;
}