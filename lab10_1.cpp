#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

double Inter(double Prevb,double interest){
		return (Prevb*interest)/100; 
	}
double To(double Prevb,double Inter){
		return Prevb+Inter;
	}
double New(double Total,double Payment){
	return Total-Payment;
}


int main(){	
	double Prevb,interest,interest2,Total,Payment,Newb;
	cout << "Enter initial loan: ";
	cin >> Prevb;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> Payment;

	
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
	int i = 1;
	while(Prevb>0){
		interest2 = Inter(Prevb,interest);
		Total = To(Prevb,interest2);
		
		if(Payment>Total) Payment=Total;
		Newb = New(Total,Payment);


	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << Prevb;
	cout << setw(13) << left << interest2;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Payment;
	cout << setw(13) << left << Newb;
	cout << "\n";	

	i++;
	Prevb = Newb;
	}
	return 0;
}
