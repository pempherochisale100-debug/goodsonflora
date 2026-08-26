#include <iostream> 

	using namespace std;
	
		int main () {
			
// null value = a special value that means something has no value.
//              when a pointer is holding a null value,
//              that pointer is not pointing to anything (null pointer)

// nullptr = keyword represents a null pointer literal

// nullptrs = are helpful when determining if an address was successfully 
//            assigned to a pointer

// when using pointers, be careful that your code isn't derefencing 
// nullptrs or pointing to free memory 
// this cause undefined behaviour 

		int *pointer = nullptr;
		int x = 123; 
		
	 pointer = &x;
		
		  if (pointer == nullptr ) {
		  	  cout << "Address was not assigned \n";
		  	  cout << " It contains number : " << *pointer << "\n";
		  }
		  else {
		  	cout << "Address was assigned \n";
		  	cout << " It contains number : " << *pointer << "\n";
		  }
			
			
			
			
			return 0;
		}