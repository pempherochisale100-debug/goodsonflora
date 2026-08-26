#include <iostream>

	using namespace std;
	
	// some programmers want to write their function definition after the main function
	// so when the function is shifted to the bottom of the program the compiler
	// will complain because it does not currently know 
	// about  the fubction since the program is eld from top to botoom
	// to solve this a function declation is required but with only the 
	// function return type, function name and parameters if any followed
	// by a semi-colon
	
	   void happy_new_year ();
	   	
// to declare a function we type the return type followed by a unique unction name 
// then a set of parenthesis followed by a set of curly braces

    void happy_birthday (string name, int age ) {
    	cout << "Happy birthday to "<< name <<" \n";
    	cout << "Happy birthday to "<< name <<" \n";
    	cout << "Happy birthday dear "<< name <<" \n";
    	cout << "Happy birthday to "<< name <<"  \n";
    	cout << "You are now " << age << " years old \n\n\n";
	}
	
		int main () {
			
			//let' declare a string variable name in the main function
			// let's also have a variable age to store the age of the user
			int age;
			string name ;
			   cout << "Enter your name \n";
			      getline (cin, name);
			    cout << "Enter your age \n";
			       cin >> age;
			        age += 1;
			        
		
		// we can pass some data to a function via what we cal arguments 
		// to accomplish this task the receiving function needs to have a matching 
		// set of parameters 
		
		// for example to pass the value stored in variable name we will pass the 
		// the variable name to the function
			
	// unction = A block of code that can be reused when invoked		
			
	// to call or invoke the happy_birthday function we type in the function name 
	// followed by the set of parenthesis
	
	     happy_birthday (name, age);
		 happy_birthday (name, age);
		 happy_birthday (name, age);		
			
		happy_new_year ();
		happy_new_year ();
		happy_new_year ();
			
			
			
			return 0;
		}
		
		
		void happy_new_year () {
			cout << "Happy new year\n";
			cout << "Happy new year\n";
			cout << "Happy new year\n";
			cout << "Happy new year\n\n\n\n";
		}