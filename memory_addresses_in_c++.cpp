#include <iostream>

	using namespace std;
	
		int main () {
			
		// memory address = location in memory where data is stored 
		// a memory address can be accessed with & (an address of operator )	
			
			
		string name = "Pempho";
		int age = 20;
		bool student = true;
		
		  cout << name << " Is stored in " << &name << "\n";
		  cout << age << " Is stored in " << &age << "\n";
		  cout << student << " Is stored in " << &student << "\n";
		
			
			
			
			
			
			return 0;
		}