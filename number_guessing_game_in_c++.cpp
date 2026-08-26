#include <iostream>
#include <ctime>

	using namespace std;
	
		int main () {
			
			
			int number;
			int guess;
			int tries; 
			
			  srand (time (NULL));
			
			int num = (rand () % 100) + 1;
			
cout << "************NUMBER**GUESSING**GAME********************\n";			
    
	 do {
	 	cout << "Enter a guess number netween 1 and 100 \n";
	 	    cin >> guess;
	 	     
	 	        tries++;
	 	        
	 	if (guess > num ) {
	 		  cout << "You were just above with " << abs (guess - num) << " steps \n";
		 }
		 else if ( guess == num ) {
		 	cout << "Congratlations you have made it!!!!!!, After " << tries << " tries \n";
		 }
		 else if (tries == 5){
		 	cout << "YOU FAILED THE GAME \n";
		 	  break;
		 }
		 else {
		 	cout << "You are just below with " << abs (num - guess) << " steps \n";
		 }
	 	
	 	
	 }	
	 while ( guess != num);
			
			
			return 0;
		}