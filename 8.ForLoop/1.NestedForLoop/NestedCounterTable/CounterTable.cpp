#include<iostream>
using namespace std;
int main(){
	int counter,table;
	
	cout<<"Enter Table: ";
	cin>>table;
		
	cout<<"Enter Counter: ";
	cin>>counter;
	
	// for(int i=1; i<=counter; i++){
		// cout<<table<<"*"<<i<<"="<<table*i<<endl;
	// 1
	for(int i=1; i<=table; i++){
		cout<<"Table="<<i<<endl;
		for(int j=1; j<=counter; j++){
			cout<<i<<"*"<<j<<"="<<i*j<<endl;
		}
	
	 }
	
	return 0;
}