#include <iostream>

	using namespace std;
	
	void walk (int steps);
	void walking (int steps);
	
		int main () {
			
	// recursion = a programming technique where a function invokes itself from 
	//             within 
	//             break a complex concept into a repeatable single steps
	
	// (iterative vs recursive)
	
	// advantages = less code and it's cleaner
	//              used for sarching and sorting algorithms
	
// disadvantages = uses more memory 
//                 slower	 		
			
			walk (100);
			
			cout << endl << endl;
			
			walking (50);
			
			
			return 0;
		}
		
		void walk (int steps) {
			
			// using iterative approach
			
			for ( int i = 0; i < steps; i++){
				cout << i + 1 << " => You take a step \n";
			}
			
			
		}
		
		 void walking (int steps) {
		 	
		 //	int i = 0;
		 //	i += 1;
		 	
		 	  if ( steps > 0) {
		 	  	  cout << " => You take a step \n";
		 	  	    walking (steps - 1);
			   }
		 }
		
		
		
		
		
		
		
		
		
		
		
		