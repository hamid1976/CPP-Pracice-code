#include <iostream>
using namespace std;

int main(){
	int load;
	
	cout<<"Enter Load:"<<endl;
	cin>>load;
	
	int trolly=load*800;
	int driver=load*150;
	int toll_tax=trolly/10;
	int diesel=load*210;
	int profit =trolly-(driver+toll_tax+diesel);
	
	cout<<"Trolly:"<<trolly<<endl
		<<"Driver:"<<driver<<endl
		<<"Toll Tax 10%:"<<toll_tax<<endl
		<<"Diesel:"<<diesel<<endl
		<<"Profit:"<<profit;
		
	
	return 0;
}