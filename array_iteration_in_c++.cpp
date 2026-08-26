#include <iostream>

	using namespace std;
	
		int main () {
			
			
// if i have an array of students 

   string students [] = {"Pemphero", "Taonga", "Emma", "Chisomo"};
   
   // if i want to print the elements of the array i will have to write a display 
   // statement for each element 
   // for  example 
   
       cout << "Element at index 0 => "<< students [0] << "\n";
	   cout << "Element at index 1 => "<< students [1] << "\n";
	   cout << "Element at index 2 => "<< students [2] << "\n";
	   cout << "Element at index 3 => "<< students [3] << "\n";	
			
			
		// but this is hard coding and therefore it can be easily miskable by 
		// programmers
		// a better approach to this would be using a for loop
		  cout << endl << endl;
		  
		    for ( int i = 0; i < sizeof (students) / sizeof (string); i++){
		    	cout << "Element at index " << i << " => " << students [i] << "\n";
			}
			
			cout << endl << endl;
			
char grades [] = {'A', 'B', 'C', 'D', 'E', 'F'};

   for (int i = 0; i < sizeof (grades) / sizeof (char); i++) {
   	    cout << "Grade at index " << i << " => " << grades [i] << "\n";
   }	
			
			
			
			
			
			
			return 0;
		}