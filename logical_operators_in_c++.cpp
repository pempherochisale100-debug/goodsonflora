#include <iostream>

	using namespace std;
	
		int main () {
			
		// && = AND logical operator => check if two conditions are true	
		// || = OR logical operator => check if at least one condition is true	
		// ! = NOT logical operator => reverses the state of it's operand	
			
			int temp;
			   cout << "Enter the temparature \n";
			       cin >> temp;
			       
			    if (temp > 0 && temp <= 30){
			    	cout << "The temparature is GOOD \n";
			    	
				}
				else {
					cout << "Temperature is BAD \n";
				}
				
				
				
			    if (temp < 0 || temp > 30){
			    	cout << "The temparature is BAD \n";
			    	
				}
				else {
					cout << "Temperature is GOOD \n";
				}
			
			
			bool sunny = false;
			
			   if (!sunny){
			   	    cout << "It is cloudy outside \n";
			   }
			   else {
			   	     cout << "It is sunny outside \n";
			   }
			
			return 0;
		}