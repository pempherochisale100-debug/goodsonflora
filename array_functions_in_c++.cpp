#include <iostream>

	using namespace std;
	
	double get_total (double prices [], int size);
	void result_message (char grades [], int size, char choice);
	
		int main () {
			
	double total;
	int size;
	   
	   cout << "How many items do you have? \n";
	      cin >> size;
	      
		double prices [size];
		  
		cout << "Enter prices for the items \n";
		   for (int i = 0; i < size; i++) {
		   	   cin >> prices [i];
		   }		
	/*		cout << endl << endl;
		 for (int i = 0; i < size; i++) {
		 	cout << prices [i] << "\n";
		 }
			
			
			*/
		total = get_total (prices, size);
			
			
			
	cout << "Your total is = MWK" << total << "\n";		
			
	char grades [] = {'A', 'B', 'C', 'D', 'E', 'F'};
	char choice;
	  
	  do {
	  cout << "###################################\n";
	  cout << "#######SELECT YOUR GRADE###########\n";
	  cout << "###################################\n";
	  cout << "1. A \n";
	  cout << "2. B \n";
	  cout << "3. C \n";
	  cout << "4. D \n";
	  cout << "5. E \n";
	  cout << "6. F \n";
	     cout << "Enter choice \n";
	       cin >> choice;
	  }
	  while (choice != 'A' && choice != 'B' && 
	         choice != 'C' && choice != 'D' && 
			 choice != 'E' && choice != 'F');
	
	int size1 = sizeof (grades) / sizeof (grades [0]);
	
	result_message ( grades, size, choice);		
			
			
			
			
			
			return 0;
		}
		
		double get_total ( double prices [], int size) {
			double total = 0;
			  for ( int i = 0; i < size; i++) {
			  	  total = total + prices [i];
			  }
			  return total;
		}
		
		void result_message (char grades [], int size, char choice){
			for (int i = 0; i < size; i++) {
				 if ( grades [i] == choice) {
				 	 cout << "Your grade exists \n";
				 	 cout << "Here is your grade " << grades [i] << "\n";
				 	 break;
				 }
				 //else {
				 //	cout << choice << "Does not exist as a grade in this program \n";
				 //}
			}
		}
		
		
		
		
		
		
		
		
		