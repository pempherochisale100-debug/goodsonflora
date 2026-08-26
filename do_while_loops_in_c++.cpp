#include <iostream>

	using namespace std;
	
			int main ()  {
				
	// do-while loop sin c++		
	// do some block of code first, THEN repeat again if .condition is true
	
	
	// the below code will not behave as required because the while loop
	// checks the condition first, if the condition is found to be tru
	//the code following the condition is executed 
	/*
	    int number;
	      cout << "Enter a positive number \n";
	        cin >> number;
		
		   while (number < 0) {
		   	     cout << "Enter a positive number \n";
		   	        cin >> number;
		   }			
				cout << "the number is " << number << "\n";
		*/
		
		
		
		
		//but that can be achieved by using a more eficient way which is the 
		// do- while loop which executes the code at least once and then 
		// checks the code, if the condition is found to be true the code is
		// repeated again until the condition becones false
		
		// do while loop stends to use less amount of code 
		// above code can be expressed as a do-while loop in the following manner
		
		float number;
		   do {
		   	   cout << "Enter a positive number \n";
		   	       cin >> number;
		   }
		   while (number < 0);
		
		
		cout << "You entered the following number : " << number << "\n";
		
		
				
				
				return 0;
			}