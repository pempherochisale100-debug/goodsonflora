#include <iostream>

	using namespace std;
	
		int main () {
			
			
			// for loops execute some block of code when the specified condition 
			// is found to be true 
			// it has structured as following 
			
			  //    for (index; condition; update) {
			  
			                   //code to be executed
			      //}
			      
			      
			      // the index and the update statement can change depending
			      // on the situation at hand
			string name = "Emma ";
			int age = 18;
			
			for (int i = 1; i <= 3; i++) {
				  cout << "i = " << i << "\n";
			}
			cout << "HAPPY BIRTHDAY " << name << "\n";
			  cout << endl << endl;
			  
			    for ( int i = 3; i >= 0; i--) {
			    	cout << "i = " << i << "\n";
				}
				
				cout << "YOU ARE NOW " << age << " YEARS OLD \n";
			
			cout << endl << endl;
			
			
			name = "Pemphero ";
		    age = 20;
			
			for (int i = 0; i <= 10; i += 2) {
				  cout << "i = " << i << "\n";
			}
			cout << "HAPPY BIRTHDAY " << name << "\n";
			  cout << endl << endl;
			  
			    for ( int i = 10; i >= 0; i -= 5) {
			    	cout << "i = " << i << "\n";
				}
				
				cout << "YOU ARE NOW " << age << " YEARS OLD \n";
			
			cout << endl << endl;
			
			
			
			return 0;
		}