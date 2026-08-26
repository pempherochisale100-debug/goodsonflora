#include <iostream>
#include <cctype>
#include <cstring>

	using namespace std;
	
	int search_array (int array [], int size, int target);
	int string_search (string array [], int size, string name);
	
		int main () {
			
	int numbers [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = sizeof (numbers) / sizeof (numbers [0]);	
	int index;
	int target;
	
	   cout << "Enter an element to search for \n";
	       cin >> target;	
			
			
	index = search_array (numbers, size, target);	
			
			
		if (index != -1) {
			cout << target << " is at index " << index << "\n";
			
		}	
		else {
			cout << target << " not found \n";
		}
			
	string foods [] = {"chimanga", "mtedza", "mbatata", "nyama"};
	int size1  = sizeof (foods) / sizeof (foods [0]);
	string name;
	   cout << "Enter the target you are searching for \n";
	      cin >> name;
		  
	int result = string_search (foods, size1, name);	
	
	   if (result != -1) {
	   	  cout << name << " Has been found at index " << result << "\n";
	   }
	   else {
	   	  cout << name << " Seems not to be in this array \n";
	   }
			
			
			
			
			
			return 0;
		}
		
		int search_array (int array [], int size, int target) {
			
			for (int i = 0; i < size; i++) {
				
				if (array [i] == target) {
					return i;
				}
			}
			
		return -1; 	
		}
		
		int string_search (string array [], int size1, string name){
			
			for ( int i = 0; i < size1; i++) {
				
				if (array [i] == name) {
					return i;
				}
			}
			return -1;
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		