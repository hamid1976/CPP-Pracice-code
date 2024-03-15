#include<iostream>
using namespace std;

int main(){
	
	const int myNum = 15;  // myNum will always be 15
	cout<< "myNum 1:"<< myNum;
	myNum = 10;  // error: assignment of read-only variable 'myNum'
	cout<< "myNum 1:"<< myNum;
	
	return 0;
}