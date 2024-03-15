#include<iostream>
using namespace std;

int main(){
	int rupees;
	cout<<"Enter Rupees:";
	cin>>rupees;
	
	int fiveThousand=rupees/5000;
	rupees =rupees%5000;
	
	int thousand=rupees/1000;
	rupees =rupees%1000;
	
	int fiveHundread=rupees/500;
	rupees =rupees%500;
	
	int hundread=rupees/100;
	rupees =rupees%100;
	
	int fifty=rupees/50;
	rupees =rupees%50;
	
	int twenty=rupees/20;
	rupees =rupees%20;
	
	int ten=rupees/10;
	rupees =rupees%10;
	
	int five=rupees/5;
	rupees =rupees%5;
	
	int two=rupees/2;
	rupees =rupees%2;
	
	int one=rupees/1;
	rupees =rupees%1;
	
	
	cout<<"Five Thousand="<<fiveThousand<<endl
		<<"Thousand="<<thousand<<endl
		<<"Five Hundread="<<fiveHundread<<endl
		<<"Hundread="<<hundread<<endl
		<<"Fifty="<<fifty<<endl
		<<"Twenty="<<twenty<<endl
		<<"Ten="<<ten<<endl
		<<"Five="<<five<<endl
		<<"Two="<<two<<endl
		<<"One="<<one;
	
	return 0;
}