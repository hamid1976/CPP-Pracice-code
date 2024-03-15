#include<iostream>
using namespace std;
int main(){
	int counter,table;
	
	cout<<"Enter Table: ";
	cin>>table;
		
	cout<<"Enter Counter: ";
	cin>>counter;
	
	for(int i=1; i<=counter; i++){
		cout<<table<<"*"<<i<<"="<<table*i<<endl;
	}
	
	return 0;
}