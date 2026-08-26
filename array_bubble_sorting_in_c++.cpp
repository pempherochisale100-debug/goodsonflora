#include <iostream>

	using namespace std;
	
	void array_sort (int array [], int size);
	
		int main ()  {
			
			
	int array [] = {10, 4, 5, 2, 9, 6, 3, 7, 1, 8};
	int size = sizeof (array) / sizeof (array [0]);	
		
				array_sort (array, size);
				
	for (int element : array) {
		cout << element << "  ";
	}		
	cout << endl << endl;
	
		
			
			
			
			
			
			
			
			
			
			
			
			
			return 0;
		}
		
		void array_sort (int array [], int size) {
			
			int temp;
			
			   for (int i = 0; i < size - 1; i++ ){
			   	
			   	for (int j = 0; j < size - i - 1; j++){
			   		
			   		if (array [j] > array [j + 1]){
			   			
			   			temp = array [j];
			   			array [j] = array [j + 1]; 
			   			array [j + 1] = temp;
			   			
					   }
				   }
			   }
			
			
		}
		
		
		
		
		
		
		
		
		
		
		
		