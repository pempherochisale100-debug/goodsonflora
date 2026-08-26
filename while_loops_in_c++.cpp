#include <iostream>

	using namespace std;
	
		int main () {
			
			string name;
			// while loops in c++
	// let's look nat the following if statements 
	
	   if (name.empty ()) {
	   	    cout << "Enter your name \n";
	   	      getline (cin, name);
	   }
	   cout <<	"Hello " << name << "\n";
	   
	   /// the user can hit enter within the if statements and the code will be 
	   // just skipped 
	   // so to avoid this we use the while loop
	   // it executes a certain amount of code for nearly an infinite amount 
	   // of time
	   
	         while (name.empty()) {
	         	   cout << "Enter your name \n";
	         	      getline (cin, name);
			 }		
			 
			    
		
		cout <<	"Hello " << name << "\n";
			
			
			return 0;
		}