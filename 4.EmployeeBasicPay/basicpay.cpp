#include<iostream>
using namespace std;

int main(){
	
	int basicpay;
	
	cout<<"Enter Employee BasicPay:";
	cin>>basicpay;
	
	int houserent=basicpay*45/100;
	int medicalAllowance=basicpay*15/100;
	int bonus=basicpay*5/100;
	int grosspay=houserent+medicalAllowance+bonus+basicpay;
	int incometax=5*basicpay/100;
	int zakat=2.5*basicpay/100;
	double convenceallowance=8*basicpay/100;
	double networth=grosspay-(incometax+zakat+convenceallowance);
	
	cout<<"Houserent 45% ="<<houserent<<endl
		<<"Medical Allowance 15% ="<<medicalAllowance<<endl
		<<"Bonus 5% ="<<bonus<<endl
		<<"Grosspay ="<<grosspay<<endl
		<<"Convence Allowance 8% ="<<convenceallowance<<endl
		<<"Tax 5% ="<<incometax<<endl
		<<"Zakwat 2.5% ="<<zakat<<endl
		<<"NetIncome="<<networth;
	
	return 0;
}