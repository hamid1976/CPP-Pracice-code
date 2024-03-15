#include<iostream>
using namespace std;

int main(){
	int java,cpp,vb,oracle,php;
	
	cout<<"Enter Java Marks:";
	cin>>java;
	
	cout<<"Enter CPP Marks:";
	cin>>cpp;
	
	cout<<"Enter VB Marks:";
	cin>>vb;
	
	cout<<"Enter Oracle Marks:";
	cin>>oracle;
	
	cout<<"Enter PHP Marks:";
	cin>>php;
	
	int obtain=java+php+cpp+vb+oracle;
	int per=obtain*100/500;
	cout<<"Total Marks:"<<500<<endl;
	cout<<"Obtain Marks:"<<obtain<<endl;
	cout<<"Percentage:"<<per<<endl;
	
	if(per>=90){
		cout<<"A1 Grade";
	}else if(per>=80){
		cout<<"A Grade";
	}else if(per>=70){
		cout<<"B Grade";
	}else if(per>=60){
		cout<<"C Grade";
	}else if(per>=50){
		cout<<"D Grade";
	}else if(per>=40){
		cout<<"E Grade";
	}else{
		cout<<"You are Fail";
	}
	
	return 0;
}