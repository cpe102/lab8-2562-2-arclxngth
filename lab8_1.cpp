#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	float loan,rate,pay;
	float balance, interest, total ;
	int year = 1;

	cout<<"Enter initial loan: ";
	cin>>loan;
	cout<<"Enter interest rate per year (%): ";
	cin>>rate;
	cout<<"Enter amount you can pay per year: ";
	cin>>pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

	balance = loan;

	do{

	interest = balance*rate/100;
	total = balance + interest;

	if(pay > total){

		pay = total;
	}

	

	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << balance;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	cout << setw(13) << left << pay;

	balance = total - pay;

	if(total == 0){

		break;
	}
	
	cout << setw(13) << left << balance;
	cout << "\n";	

	year++;
	


	
	}
	while(balance > 0);{


	}
	
	return 0;
}
