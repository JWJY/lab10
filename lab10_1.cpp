#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double a, b, c, PrevBalance , Interest , Total , Payment , NewBalance ;
	int year = 1;
	cout << "Enter initial loan: ";
	cin >> a;
	cout << "Enter interest rate per year (%): ";
	cin >> b;
	cout << "Enter amount you can pay per year: ";
	cin >> c;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	while(NewBalance != 0){
		if (year == 1){
			PrevBalance = a;
		}else{
			PrevBalance = NewBalance;
		}
		Interest = PrevBalance*(b/100);
		Total = Interest + PrevBalance;
		if(c < Total){
			Payment = c;
		}else{
			Payment = Total;
		}
		NewBalance = Total - Payment;
	

	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";	
	year++;
	}
	return 0;
}