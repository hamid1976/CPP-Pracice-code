#include <iostream>
using namespace std;

int main(){
	int days,week,month,year;
	
	cout<<"Enter Days:";
	cin>>days;
	
	year=days/365;
	int remYear=days%365;
	
	month=remYear/30;
	int remMonth=remYear%30;
	
	week=remMonth/7;
	int remDays=remMonth%7;
	
	cout<<"Year="<<year<<endl
	<<"Month="<<month<<endl
	<<"Week="<<week<<endl
	<<"Rem Days="<<remDays;
	
	return 0;
	
	
}