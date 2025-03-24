#include <iostream>

using namespace std;

double temp;
char unit;


int main (){
	
	cout << "********* Temperature Converter ***********" << endl;
	cout << "F for Fahrenheit" << endl;
	cout << "C for Celcius" << endl;
	
	cout << "Enter your unit (C or F): ";
	cin >> unit;
	
	cout << "Enter the temperature: ";
	cin >> temp;
	
	// the formula for F to C conversion is C = (F-32)*5/9
	if (unit == 'F' || unit == 'f') {
		cout << temp << "F is equal to: " << (temp-32) * 5.0 / 9.0 << "C" << endl; 
	} 
	else if (unit == 'C' || unit =='c'){
		cout << temp << "C is equal to: " << temp * 9.0 / 5.0 + 32 << "F" << endl; 	
	}
	else {
		cout << "Incorrect unit!" << endl;
	}
	
	return 0;
}