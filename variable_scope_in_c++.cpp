#include <iostream>

	using namespace std;

// to declare a global variable in c++ we need to make the variable dclaration
// outside the main () function but before it 
// like =>

      int age = 25;
      float number = 15.5;
	
	void print_number ();
	
		int main () {
			
// local variable = is a variable declared inside a function or a block of code
// Global variable = Is a variable declared outside all other functions

	// suppose i have a varible 
	cout << "This age from the main function " << age << "\n";
	
	  int num1 = 20;
	
	   // to display the value of num1 i will
	     cout << "Num_1 = " << num1 << "\n\n";
	     
// then what if i have a function that will try to access the value of num1

			
		print_number();	
		
// so therefore to allow the function to have access to other outside variables we need
// to pass them as arguments to the function and the funftion should have the matching set
// of parameters

// or else for the print_number function to have it's own version of the num1, i can .also declare num1
// inside the function 
			
			
			
			
			
			return 0;
		}
		
		void print_number (){
			
			cout << "This is age from the print_number function " << age << "\n";
			  int num1 = 10;
			cout << "number = " << num1 << "\n\n";
			
			// to try to access the global variable 
			// we use the scope resolution operator  '::'
			
			float number = 100;
			
			cout << "This is the value of 	number from the global variable \n";
			    cout << ::number << "\n";
			cout << "this is the value of number from the function scope \n";
			    cout << number << "\n";
			
		}	
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
		