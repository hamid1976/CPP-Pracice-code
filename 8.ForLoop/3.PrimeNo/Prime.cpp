#include<iostream>
using namespace std;

	int main(){
		int num;
		cout<<"Enter any no: ";
		cin>>num;
		int b=0;
		for(int i=1;i<=num; i++){
			if(num%i==0){
				b++;
			}
		}
		if(b<=2){
			cout<<num<<" is Prime No ";
		}else{
			cout<<num<<" is not a Prime No ";
		}
		return 0;
	}
		