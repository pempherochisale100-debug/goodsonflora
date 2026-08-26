#include <iostream>
// the following header file contains some of the most useful math related 
// functions 
#include <cmath>

 	using namespace std;
 	
 		int main () {
 			
 			double number1 = 3;
 			double number2 = 4;
 			double number3;
 			
 // to find the maximum of two or more values we the max function
    number3 = max (number1, number2);
	  cout << "The max number between " << number1 << " and " << number2 << " is " << number3 << "\n";
	  			
 // for the minimum value we use the min function 
      number3 = min (number1, number2);
	     cout << "The minimum number is " << number3 << "\n";

// to raise a number  to  given power we use the power function 
   number3 = pow (number1, number2);
     cout << number1 << " Raised to the power " << number2 << "  = " << number3 << "\n";
		 
 // to return the squareroot of a number we use the square root function
     number3 = sqrt (number2);
	    cout << "Square root of " << number2 << " = " << number3 << "\n";
		
// to return the absolute value we the abs () function 
    int negative = -21;
	   number3 = abs (negative);
	      cout << "The absolute value of " << negative  << " = " << number3 << "\n";	 
		 
		 
// to round a number to  given value we the round function 
   float number_round = 21.4444;
      number3 = round (number_round);
	     cout << number_round << " Rounded = " << number3 << "\n";	
		 
// to always round up we use the floor function 
   number3 = floor (number_round);
     cout << number_round << " Rounded down is = " << number3 << "\n";
	 
// to always round up we use the ceil function 
    number3 = ceil (number_round);
	    cout << number_round << " Rounded up is = " << number3 << "\n";	 
		 
		 
		 
		 
		 
		 
		 
		 	
 			return 0;
		 }