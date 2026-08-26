#include <iostream>

	using namespace std;
	
		int main () {
			
// dynamic memory = memory that is allocated after the program is already
//                  compiled and running
//                  Use the 'new' operator to allocate memory in the heap 
//                  rather than in the stack

// useful when we don't know how much memory we will need 
// makes our program more flexible especially when accepting user input

		int *pointer_number = NULL;
		
		pointer_number = new int;	
		
		*pointer_number = 21;
		
		cout << "The address of pointer_number => " << pointer_number << "\n";
		cout << "The value of pointer_number   => " << *pointer_number << "\n";
			
			cout << endl << endl;
			cout << "#######################DYNAMIC##ARRAY######################\n";
			
			cout << "Enter number of grades you have \n";
			  int size;
			    cin >> size;
			    
			char *pointer_grades = nullptr;
			
			pointer_grades = new char [size];
			
			   for (int i = 0; i < size; i++) {
			   	 cout << "Enter grade #" << i + 1 << " => ";
			   	   cin >> pointer_grades [i];
			   }
			
			for (int i = 0; i < size; i++) {
				cout << pointer_grades [i] << "  ";
			}
			
			delete[] pointer_grades;
			
		delete pointer_number;  	
			
			
			
			
			
			
			
			
			
			
			
			return 0;
		}