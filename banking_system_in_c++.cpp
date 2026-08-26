#include <iostream>
#include <iomanip>

	using namespace std;
	
	  void show_balance (double balance);
	  double deposit ();
	  double withdraw (double balance);
	
		int main () {
			
			double balance = 0;
			int choice = 0;
			
	do {
		cout << "#########################\n";
				cout << "SIMPLE BANKING SYSTEM\n";
			  cout << "#########################\n";
				cout << "1. Check balance \n";
				cout << "2. Deposit money \n";
				cout << "3. Withdraw money \n";
				cout << "4. Exit \n";
				
				 cout << "SELECT AN OPTION (1-4)\n";
				     cin >> choice;
				     
	// to clear error flags when the standard input fails to interpret  the value
	            // we will use the following functions to clear the input
				// buffer
				      cin.clear(); 	
					  fflush(stdin);		      
					 
					 	switch (choice) {
					 		case 1: {
					 			
					 				show_balance (balance);
					 				
								break;
							 }
							 case 2: {
							 	
							 		balance = balance + deposit ();
							 		show_balance (balance);
							 		
								break;
							 }
							 case 3: {
							 	
							 		 balance = balance - withdraw (balance);
							         show_balance (balance);
							         
								break;
							 }
							 case 4:{
							 		
							 		cout << "PRESS ANY KEY TO EXIT \n";
							
								break;
							 }
							 default :{
							 		
									 cout << "INVALID CHOICE SELECTED \n";
							
								break;
							 }
						 }
	}
	while (choice != 4);	
			
			
			
			
			
			
			
			
			
			
			
			
			
			return 0;
		}
	  void show_balance (double balance){
	  		cout << "Your balance is MWK" << setprecision (2) << fixed << balance << "\n";
	  }
	  
	  double deposit (){
	  	
	  	   double amount = 0;
	  	     cout << "Enter amount to be deposited \n";
	  	         cin >> amount;
	  	      
	  	 if (amount > 0) {
	  	 	  return amount;
		   }  
		   else {
		   	   cout << "That's not a valid amount \n"; 
				  return 0; 
		   }
	  	   
	  	return 0;
	  }	
	  
	  double withdraw (double balance){
	  	
	  	double amount = 0;
	  	   cout << "Enter amount to be withdrawn \n";
	  	      cin >> amount;
	  			
	  			if (amount > balance ) {
	  				  cout << "insufficient balance,, please deposit some money \n";
	  				      return 0;
				  }
				  else if ( amount <= 0) {
				  	   cout << "That's not a valid amount \n";
				  	     return 0;
				  }
				  else {
				  	return amount;
				  }
	  	return 0;		
	  }
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		