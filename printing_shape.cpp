#include <iostream>

	using namespace std;
	
		int main () {
			
			int rows, columns;
			char symbol;
			   cout << "Enter number of rows for the rectangle/ square \n";
			      cin >> rows;
			    cout << "Enter nubmer of columns \n";
			       cin >> columns;
			       
			cout << "Enter a symbol ,ie, '#' \n";
			    cin >> symbol;
			    
			      for ( int i = 0; i <= rows; i++){
			      	   
			      	   for ( int j = 0; j <= columns; j++) {
			      	   	   cout << symbol;
						 }
						 cout << endl;
				  }
			
			
			
			
			
			return 0;
		}