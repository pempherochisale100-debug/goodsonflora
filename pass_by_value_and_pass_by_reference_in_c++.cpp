#include <iostream>

	using namespace std;
	
	void swap (string &food, string &drink);
	
		int main () {
			
		string 	food = "chimanga";
		string drink = "water";
		string temp;
		
		cout << "*************************************\n";
		cout << "          BEFORE SWAPPING            \n";
		cout << "*************************************\n";
		  cout << "food  => " << food << "\n";
		  cout << "drink => " << drink << "\n";
		  
		  cout << endl << endl;
		  
		  swap ( food, drink);
	/*	  
		temp = food;
		food = drink;
		drink = temp;
	*/	
		cout << "*************************************\n";
		cout << "          AFTER SWAPPING            \n";
		cout << "*************************************\n";
		  cout << "food  => " << food << "\n";
		  cout << "drink => " << drink << "\n";
		
		
			
			
			
			
			
			
			
			
			
			return 0;
		}
		
		void swap (string &food, string &drink){
			  
			  string temp;
			  temp = food;
			  food = drink;
			  drink = temp;
			  
		}
		
		
		
		
		
		
		
		
		