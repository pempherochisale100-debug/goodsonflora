#include <iostream>

	using namespace std;
	
		int main () {
			
// ARRAY = a data structure that can hold multiple values of same datatype
//         values are accessed by an index number
//         "kind of like a variable that holds multiple values"

	// lets have a variable car that can store the car types 
	   string car = "BMW ";
	     cout << "Car => " << car << "\n";
		
	// we can transform the above variable into an array by appending the 
	// square brackets after the identifier and the values should be placed within the 
	// curly braces 
	
	string name [] = {"pemphero", "Emmacrate", "Maggie"};	
		
		//it is also possible to add an element to an array
		  
		  name [3] = "CJHomie";
		
			
		//cout << name ;	// this will display the memory address where the elements
		// of the array are 
		cout << "\n" << name [0] << "\n" << name [1] << "\n" << name [2] << "\n";
		cout << name [3] << "\n";
		
// we can also declare an array and assign values to it later
    double prices [4];
	
	   prices [0] = 1000.30;
	   prices [1] = 200.90;	
	   prices [2] = 3600.80;
	   prices [3] = 1030.30;
	   
	      cout << prices [0] << "\n";	
	      cout << prices [1] << "\n";
	      cout << prices [2] << "\n";
	      cout << prices [3] << "\n";
		
		
		
		
		
		
		
		
		
			
			
			return 0;
		}