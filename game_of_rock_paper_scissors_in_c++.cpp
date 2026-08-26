#include <iostream>
#include <ctime>

	using namespace std;
	
	char get_user_choice ();
	char get_computer_choice ();
	void display_choice (char choice);
	void choose_winner (char player, char computer);
	
		int main () {
			
			char player;
			char computer;
			
			player = get_user_choice ();
			
			 cout << "Your choice :: ";
			   display_choice (player);
			
			
			
			
			return 0;
		}
		
	char get_user_choice (){
		char player;
		
	   	  do {
	   	  	
	   	  cout << "************************\n";
		  cout << "Rock-paper-scissors-game\n";
		  cout << "************************\n";
		  cout << "'r' for Rock \n";
		  cout << "'p' for Paper \n";
		  cout << "'s' for scissors \n";
		  
		  cout << "Please select an option \n";
		  
		     cin >> player;
		     
			 }
			 while (player != 'r' && player != 'p' && player != 's');
		return 0;
	}
	
	 
	char get_computer_choice (){
		
		return 0;
	}
	
	void diplay_choice (char choice){
	    
		switch (choice) {
			case 'r': {
				  cout << "Rock \n";
				break;
			}
			case 'p': {
				  cout << "Paper \n";
				break;
			}
			case 's': {
				   cout << "Scissors \n";
				break;
			}
			default : {
				  cout << "INVALID SELECTION, PLEASE SELECT (r, p or s) \n";
				break;
			}
		
			
		}	
		
	}
	
	void choose_winner (char player, char computer){
		
		
	}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		