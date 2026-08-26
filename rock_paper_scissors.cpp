#include <iostream> 
#include <ctime>

	using namespace std;
	
	char get_user_choice ();
	char get_computer_choice ();
	void show_choice (char choice);
	void choose_winner (char player, char computer);
	
		int main () {
			
		char player, computer;
		
		char controller;
			
			do {
							
			    player = get_user_choice ();	
					   
					cout << "Your choice is : ";
				show_choice (player);
					cout << endl;	
				computer = get_computer_choice ();	
					cout << "The  computer's choice : ";
				 
				show_choice (computer);
				 
				choose_winner (player, computer);
				
				
				cout << "Do you want to proceed (Y/N)?: ";
					cin >> controller;
			}while (controller == 'Y' || controller == 'y');
	 
	 
	    
		
		
		
		
		
		
			
			return 0;
		
		
	}
		
	char get_user_choice (){
		char player;

cout << "############################################\n";
cout << "         ROCK-PAPER-SCISSORS-GAME    \n";
cout << "############################################\n";
   
   
     do {
     
	cout << "Choose one of the following  \n";
     	
    cout << "'r' for Rock \n";
    cout << "'p' for Paper \n";
    cout << "'s' for Scissors \n";
    
    
       cin >> player;
     	
	 }
	 while (player != 'r' && player != 'p' && player != 's');
   
    
       
         //cout << player << "\n";
		
		return player;
	}
	
	char get_computer_choice (){
		
		srand (time (0));
		
		   int random_number = (rand () % 3) + 1;
		   
		      switch (random_number) {
		      	 case 1 :{ 
		      	     return 'r';
					break;
				   }
				 case 2: {
				 	   return 'p';
					break;
				 }
				 case 3: {	
				      return 's';
				    break; 
				 }
		      	
			  }
		
		return 0;
	}
	
	void show_choice (char choice){
		
		  switch (choice ) {
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
			//	default : {
			//		   cout << "YOU HAVE ENTERED AN INVALID OPTION \n";
			//		break;
			//	}
		  }
		
	}
	
	void choose_winner (char player, char computer){
	     
	     switch (player) {
	     	  case 'r': {
	     	  	    if (computer == 'r') {
	     	  	    	   cout << "It's a tie \n";
					   }
					else if (computer  == 'p'){
						  cout << "You lose! \n";
					}
					else {
						cout << "You won !!!!!!\n";
					}
				break;
			   }
			   
			   case 'p': {
	     	  	    if (computer == 'r') {
	     	  	    	   cout << "You won!!!!!!!!! \n";
					   }
					else if (computer  == 'p'){
						  cout << "It's a tie \n";
					}
					else {
						cout << "You lose!!!!!!\n";
					}
				break;
			   }
			   
			   case 's': {
	     	  	    if (computer == 'r') {
	     	  	    	   cout << "You lose!!!!! \n";
					   }
					else if (computer  == 'p'){
						  cout << "You win! \n";
					}
					else {
						cout << "It's a tie \n";
					}
				break;
			   }
		 }
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	