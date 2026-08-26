#include <iostream>

    using namespace std;
    
        int main () {
        	
//ternary operator ?: = replacement to an if/else statement
// condition ? expression1 : expression2;

      float grade;
         cout << "Enter your grade \n";
            cin >> grade;
        //using an if/else statement  
               if ( grade >= 60 ){
               	   cout << "You have passed \n";
			   }
			   else {
			   	cout << "You have failed \n";
			   }
		
		// to use the ternary operator 
grade >= 60 ? cout << "You have passed " : cout << "You have failed \n";
       
       cout << endl << endl;
	   
	   int number;
	       cout << "Enter a number \n";
	          cin >> number;
	number % 2 == 1 ? cout << "This number is ODD " : cout << "This number is EVEN\n";	   
	   
	   cout << endl << endl;
	   
	bool hungry = true;
	  hungry ? cout << "You are hungry " : cout << "You are full \n";
	    
	    cout << endl << endl;
		
//it can also work like 
   cout << (hungry ? "You are hungry" : "You are full ");	
        	
        	return 0;
		}