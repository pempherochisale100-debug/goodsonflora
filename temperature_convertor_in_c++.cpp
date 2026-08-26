#include <iostream>

	using namespace std;
	
		int main () {
			
			double temp;
			char unit;
cout << "************TEMPERATURE**CONVERTOR***************\n";
	cout << "1. 'F' = Fahreiheit \n";
	cout << "2. 'C' = Celcius \n";
	cout << "Enter your choice \n";
	   cin >> unit;
	
	    if (unit == 'F' || unit == 'f'){
	    	cout << "enter temperature in degrees celcius \n";
	    	   cin >> temp;
	    	     temp = (1.8 * temp) + 32.0;
	    	       cout << "Temperature = " << temp << "F\n";
		}
		else if (unit == 'C' || unit == 'c'){
			cout << "Enter temperature in Fahreinheit \n";
			   cin >> temp;
			      temp = (temp - 32) / 1.8;
			        cout << "Temperature = " << temp << " Degrees Celcius \n";
		}
		else {
			cout << "Your choice should be between F and C \n";
		}
			
cout << "************************************************** \n";			
			
			return 0;
		}