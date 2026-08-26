#include <iostream>

	using namespace std;
	
	string string_concantenate ( string first_name, string last_name);
	
		int main () {
			
			string first_name, last_name;
			   cout << "Enter first name \n";
			      cin >> first_name;
			    cout << "Enter last name \n";
			       cin >> last_name;
			       
	string full_name = string_concantenate (first_name, last_name);
	
	   cout << "Your full name => " << full_name << "\n";
			
			
			
			
			
			
			return 0;
		}
		
		
		string string_concantenate ( string first_name, string last_name) {
			string result = first_name + " " + last_name;
			   return result;
		}