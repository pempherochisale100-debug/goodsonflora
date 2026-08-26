#include <iostream>
#include <ctime>

	using namespace std;
	
		int main () {
			
			
	// pseudo-random numbers = NOT truly random (but close)
	
	// we begin by initialising the random number generator 
	// this is done by typing in srand ();
	// within the srand function we need to seed the random number generator
	// what programmers typically do is to use the current time 
	 		
		srand (time (NULL));
		
		// then i will store the first nrandom number withina a variable 
		 
		 // the following statement will generate a random number between 0 and 
		 // 32 thousand something  
	    int num = rand ();	
		 cout << "THE FOLLOWING IS THE DEFAULT RANDOM NUMBER IN C++\n";
		 cout << "The random number is = " << num << "\n";  	
			
// but let's assume we do want to roll a 6-sided dice 
// the number is supposed to between 1 and 6
// to achieve this we use the modulus operatot to give us the remainder of the 
// of division by the number 6
// like the followin gcode 

       num = (rand () % 6);
       
       
           cout << endl << endl;
           
    cout << "THE FOLOOWING IS THE RANDOM NUMBER BETWEEN 0 AND 6\n";       
        cout << "The random number is = " << num << "\n";
        
// however the following code will generate the random number bu iot will include
// 0, to exclude 0,
// we add 1 to the expression above 

     num = (rand () % 6) + 1;
     
         cout << endl << endl;
      cout << "THE FOLOOWING IS THE RANDOM NUMBER BETWEEN 1 AND 6\n";   
      cout << "The random number is = " << num << "\n";
	   			
// to generate a random number between 1 and 100 we do the following 


    num = ( rand () % 100 ) + 1;
	    cout << endl << endl;
	    cout << "THE FOLOOWING IS THE RANDOM NUMBER BETWEEN 1 AND 100\n";
	cout << "The random number is = " << num << "\n";			
			
			
			
			
			
			
			
			
			return 0;
		}