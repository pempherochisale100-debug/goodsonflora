#include <iostream>

	using namespace std;
	
		int main () { 
		
		
	string foods [5];
	int size = sizeof (foods) / sizeof (foods [0]);
	
	string temp;
	
	// now if the user does not want to type in all the elemnts 
	// he/she place 'q' to quit the process of data insertion
	// but because the size of the array the program will display some empty spaces to 
	// show that the array is not filled 
	// to solve this i will use the standard for loop to check if element at the
	//index of i is empty
	for (int i = 0; i < size; i++) {
		cout << "Enter a food you like or 'q' to quit " << i + 1 << " : ";
		  getline (cin, temp);
		    
		    if (temp == "q"){
		    	break;
		    	
			}
			else {
				foods [i] = temp;
			}
	}
		
		cout << endl << endl;
	cout << "you like the following food \n";
	
	   for (string food : foods) {
	   	   cout << food << "\n";
	   }	
	   
	   //cout << endl << endl;
	   
	      for (int i = 0; !foods [i].empty (); i++) {
	      	  cout << foods [i] << "\n";
		  }
		
		
		
		
		
		
		
		
		
		
		
		
		return 0;
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		