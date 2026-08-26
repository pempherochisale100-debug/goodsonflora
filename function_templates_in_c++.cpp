#include <iostream>


	using namespace std;
	
	
	
	// to create a function template 
	template <typename T>
	
	auto max ( T number1, T number2){
		
		return (number1 > number2) ? number1 : number2;
		
	}
/*	
	int max (int number1, int number2) {
		
		
		int result = ( number1 > number2) ? number1 : number2;
		return result;
		
	}
	double max (double number1, double number2) {
		
		
		double result = ( number1 > number2) ? number1 : number2;
		return result;
		
	}
	char max (char number1, char number2) {
		
		
		char result = ( number1 > number2) ? number1 : number2;
		return result;
			
	
	
	*/
		int main () {
			
			double number1, number2;
			int x, y;
			
			 cout << "Enter number 1 \n";
			     cin >> number1;
			 cout << "Enter number 2 \n";
			      cin >> number2;
			 cout << "Enter number 3 \n";
			      cin >> x;
			 cout << "Enter number 4 \n";
			       cin >> y;
// function templates = describe what a function looks like.
//                      Can be used to generate as many overloaded functions 
//                      as needed, each using different datatype 			
			
		//cout << max (10, 2) << "\n";
		double result = max (number1, number2);
		//cout << endl << endl;
		cout << result << endl;
		cout << endl << endl;	
			
			
			
			return 0;
		}