#include <iostream>

	using namespace std;
	
		int main () {
			
		// break = break out of a loop
		//       = Can also also used in switch cases to break out oft he matching 
		//          case	
		// Continue = used to skip current iteration and coninue with the 
		//            other other iterations
			
		// let's look at the following for loop which will print 
		// 20 numbers from 0-20
		
		   for ( int i = 0; i <= 20; i++) {
		   	   cout << "i = " << i << "\n";
		   }	
			cout << endl << endl;
			
	// the following code snnipet will demonstrate the use of 
	// break statement in a for loop
	
	   for (int i = 0; i <= 20; i++)	{
	   	   if ( i == 13) {
	   	   	   break;
			  }
			cout << "i = " << i << "\n\a"; 
	   }
	   
	   cout << endl << endl;
	   // the following code snnipet will demonstrate the use of 
	// continue statement in a for loop
	
	   for (int i = 0; i <= 20; i++)	{
	   	   if ( i == 13) {
	   	   	   continue;
			  }
			cout << "i = " << i << "\n\a"; 
	   }	
			
			
			
			
			
			
			
			
			
			
			
			return 0;
		}