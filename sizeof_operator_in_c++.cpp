#include <iostream>

	using namespace std;
	
		int main () {
			
			
		// sizeof() = determines the size in bytes of a variable, data type, objects, etc.
		
			double gpa = 2.5;
			string name = "Pempho";
			char grade = 'f';
			bool student = true;
	// using the sizeof operator we can find how many elements are there in the 
	// array by dividing the sizeof (array_name) / sizeof(array_datatype)
			char grades [] = {'A', 'B', 'C', 'D', 'F'};
			string students [] = {"Pemphero", "Chisomo", "Alinane", "Tionge"};
			
			   cout << "Size of string => "  << sizeof (name)  << " bytes \n";
			   cout << "Size of double => "  << sizeof (gpa)   << " bytes \n";
			   cout << "Size of char   => "  << sizeof (grade) << " bytes \n";
			   cout << "Size of bool   => "  << sizeof (student)  << " bytes \n";			
			   cout << "Size of array grades => "  << sizeof (grades)  << " bytes (DEPENDS) \n";
			   cout << "This array has => " << sizeof (grades) / sizeof (char) << " elements \n";
			   cout << "Size of array students => "  << sizeof (students)  << " bytes \n";
			   cout << "This array has => " << sizeof (students) / sizeof (string) << " elements \n";
			   
			
			
			
			
			return 0;
		}