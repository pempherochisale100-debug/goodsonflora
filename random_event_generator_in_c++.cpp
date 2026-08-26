#include <iostream>
#include <ctime>

	using namespace std;
	
		int main () {
			
		  srand ( time (0));
		     int random_number = (rand () % 5) + 1;	
			
		      switch (random_number) {
		      	  case 1: {
		      	  	  cout << "You won a cigeratte \n";
						break;
					}
					case 2: {
						 cout << "You won a weed cake \n";
						break;
					}
					case 3: {
						cout << "You won a brand new t-shirt \n";
						break;
					}
					case 4: {
						cout << "You won a bicyle \n";
						break;
					}
					case 5: {
						cout << "You won a packet of condoms \n";
						break;
					}
					default : {
						 cout << "you lose \n";
						break;
					}
			  }	
			
			
			
			return 0;
			
		}