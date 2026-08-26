#include <iostream>

	using namespace std;
	
		int main () {
			
		// nested loops are simply loops inside another loop
		
		    	
			
			for (int j = 0; j <= 3; j++) {
			cout << "The value of j in each iteration = " << j << "\n";	
				for (int i = 0; i <= 10; i++){
		    	   cout << "i = " << i << "\n";
		 		}
			cout << endl << endl;
			}
			
			
			return 0;
		}