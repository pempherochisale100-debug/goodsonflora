#include <iostream>

	using namespace std;
	
		int main () {
			
// foreach = loop that eases the traversal over an iterable data set

// array is an example of an iterable data set			

// if i have an array of students 

  string students [] = {"Pemphero", "Emmacrate", "Chisomo", "Oriah"};
  
 // to display the elements within this array i can use a standard for 
 // loop  and it will be like
 
     for ( int i = 0; i < sizeof (students) / sizeof (string); i++) {
     	  cout << i + 1 << " => " << students [i] << "\n";
	 }	
	 
	 cout << endl << endl;
	 
	// using a foreach loop we can get the elements with less code 
	// the syntax is like the following 
	// for (datatype_of_iterable_data_set  current_element  iterable_data_set) {
	//             display the current element
	
	
	     for (string student : students) {
	     	cout << student << "\n"; 
		 }	
		 
		cout << endl << endl;
		
	int grades [] = {65, 89, 54, 67, 90};
	
	    for (int i = 0; i < sizeof (grades) / sizeof (int); i++) {
	    	cout << i + 1 << " => " << grades [i] << "\n";
		}	
			
		cout << endl << endl;
		
		for (int grade : grades) {
			int i ;
			 i += 1;
			cout << i << " => "<< grade << "\n";
		}
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			return 0;
		}