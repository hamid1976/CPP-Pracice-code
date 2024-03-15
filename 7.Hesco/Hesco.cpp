#include<iostream>
using namespace std;

	int main(){
		int unit;
		cout<<"Enter unit: ";
		cin>>unit;
		
		
		if(unit>=1 && unit<=100){
			int a = unit * 2;
			cout<<"Charges :"<<a;
		}
		if(unit>=100 && unit<=200){
			int a =100*2;
			int b =(unit -100)*4;
			cout<<"100 * 2  ="<<a<<endl;
			cout<<(unit-100)<<"* 4="<<b<<endl;
			cout<<"Total Bill :" <<(a+b);
		}
		if(unit>=200 && unit<=300){
			int a =100*2;
			int b =100*4;
			int c =(unit-200)*6;
			cout<<"100 * 2  ="<<a<<endl;
			cout<<"100 * 4  ="<<b<<endl;	
            cout<<(unit-200)<<"* 4 ="<<c<<endl;	
			cout<<"Total Bill :"<<(a+b+c);
		}
		if(unit>=300 && unit<=400){
			int a =100*2;
			int b =100*4;
			int c =100*6;
			int d =(unit-300)*8;
			cout<<"100 * 2  ="<<a<<endl;
			cout<<"100 * 4  ="<<b<<endl;	
			cout<<"100 * 6  ="<<c<<endl;	
            cout<<(unit-300)<<"* 8 ="<<c<<endl;	
			cout<<"Total Bill:" <<(a+b+c+d);
		}
		if (unit>=400 ){
			int a =100*2;
			int b =100*4;
			int c =100*6;
			int d =100*8;
			int e =(unit-400)*10;
			cout<<"100 * 2  ="<<a<<endl;
			cout<<"100 * 4  ="<<b<<endl;	
			cout<<"100 * 6  ="<<c<<endl;	
			cout<<"100 * 8  ="<<d<<endl;	
            cout<<(unit-300)<<"* 10 ="<<e<<endl;	
			cout<<"Total Bill:"<<(a+b+c+d+e);
		}
	return 0;
}
